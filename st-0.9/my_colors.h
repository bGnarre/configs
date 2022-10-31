/* Terminal colors (16 first used in escape sequence) */
static const char *colorname[] = {
	/* 8 normal colors */
	"black",
	"red4",
	"green4",
	"yellow4",
	"blue4",
	"magenta4",
	"cyan4",
	"gray85",

	/* 8 bright colors */
	"gray50",
	"red3",
	"green3",
	"yellow3",
	"blue3",
	"magenta3",
	"cyan3",
	"gray90",

	[255] = 0,

	/* more colors can be added after 255 to use with DefaultXX */
	"green3", /* default cursor color */
	"black", /* default reverse cursor color */
	"#181818", /* default foreground colour */
	"#e6e6e6", /* default background colour */
};


/*
 * Default colors (colorname index)
 * foreground, background, cursor, reverse cursor
 */
unsigned int defaultfg = 258;
unsigned int defaultbg = 259;
unsigned int defaultcs = 256;
static unsigned int defaultrcs = 257;
