Simple Android Spine Runtime
----------------------------

For the project I am working on I needed a simplified version of a spine runtime that did not depend on any external
rendering engines and simply allowed me to load and run an animation from spine with just raw SRT
(Scale, Rotation, Transformation) data reported for the bones in the animation.

This implementation leverages the spine-c implementation and provides a simple JNI wrapper for use in Android.

The JSON files produced by spline simply needs to be placed in the **assets** folder of your android app.

.. note:: This library is limited to running simple animations and is not a full spine runtime.

Build the library::

    ndk-build

Load the lib::

	static {
		System.loadLibrary("spine");
	}

Init the context ::

	SpineContext.init(this);

Create a factory (number of animations must be specified) ::

	SpineAnimationFactory factory = new SpineAnimationFactory(this, "spineboy.atlas", "spineboy.json", 1);

Now we can create the animation::

	SpineAnimation animation = factory.create();

Animation data is written to a native buffer, so we need to allocate a buffer and specify the offset/stride::

    final int BYTES_PER_FLOAT = 4;
    final int FLOATS_PER_BONE = 12; // 6 x 2 coords for GL_TRIANGLES

    BasicSpineVertexBufferInfo vbi = new BasicSpineVertexBufferInfo();
    vbi.setDrawMode(GLES20.GL_TRIANGLES);
    vbi.setOffset(0);
    vbi.setStride(0);

    vbi.setVertexBuffer(
        ByteBuffer.allocateDirect(
            BYTES_PER_FLOAT * FLOATS_PER_BONE * animation.numBones)
            .order(ByteOrder.nativeOrder())
            .asFloatBuffer());

    animation.setSpineVertexBufferInfo(vbi);

Set the animation and track::

    animation.setAnimation(0, "jump", false);

Optionally add an animation to the track::

    animation.addAnimation(0, "walk", true, 0);

Step the animation::

	animation.step(delta); // delta is in milliseconds

Update in game objects.  The vertex data for each bone will have been written to the vertex buffer allocated in the ``SpineVertexBufferInfo`` instance

On destroy clean up::

    factory.destroy();

