int  gethd(unsigned char *, bmpheader *);
void getinfohd(unsigned char [], bmpinfoheader *);
void printhd(bmpheader *);
void printinfohd(bmpinfoheader *);

void border(unsigned char *buf, int width, int height, unsigned char color, int bsize);
void negative(unsigned char *buf, int width, int height);
void gradient(unsigned char *buf, int width, int height);
void min_max_color(unsigned char *buf, int width, int height);
void real_size(bmpheader *, bmpinfoheader *);
void blur(unsigned char *buf, int width, int height);
void rotate(unsigned char *buf, int width, int height);
void blackwhite(unsigned char *buf, int width, int height, unsigned char threshold);