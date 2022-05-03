void set_color_red();
void set_color_yellow();
void set_color_green();
void reset_color();
void set_color_magenta();

void set_color_red() {
  printf("\033[1;31m");
}
void set_color_yellow() {
  printf("\033[1;33m");
}
void set_color_green() {
  printf("\033[1;32m");
}
void set_color_blue() {
  printf("\033[0;34m");
}

void set_color_magenta(){
  printf("\033[1;35m");
}
void reset_color() {
  printf("\033[0m");
}
