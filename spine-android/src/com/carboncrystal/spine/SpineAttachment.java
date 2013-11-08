package com.carboncrystal.spine;

public class SpineAttachment {
	public final String name;
	public SpineSkin skin;
	public Object userData;
	public final float[] vertices = new float[8];

	public SpineAttachment(String name) {
		this.name = name;
	}

	@Override
	public boolean equals(Object o) {
		if (this == o) {
			return true;
		}
		if (!(o instanceof SpineAttachment)) {
			return false;
		}
		SpineAttachment that = (SpineAttachment) o;
		return name.equals(that.name);
	}

	@Override
	public int hashCode() {
		return name.hashCode();
	}
}
