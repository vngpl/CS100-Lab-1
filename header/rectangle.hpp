#pragma once

class Rectangle {
	private:
		int width;
		int height;
	public:
		void set_width(int w);
		void set_height(int h);
		int area();
};
