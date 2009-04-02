/*
* Copyright (C) 2007-2008 Gilles Gigan (gilles.gigan@gmail.com)
* eResearch Centre, James Cook University (eresearch.jcu.edu.au)
*
* This program was developed as part of the ARCHER project
* (Australian Research Enabling Environment) funded by a
* Systemic Infrastructure Initiative (SII) grant and supported by the Australian
* Department of Innovation, Industry, Science and Research
*
* This program is free software: you can redistribute it and/or modify
* it under the terms of the GNU General Public  License as published by the
* Free Software Foundation, either version 3 of the License, or
* (at your option) any later version.
*
* This program is distributed in the hope that it will be useful,
* but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY
* or FITNESS FOR A PARTICULAR PURPOSE.
* See the GNU General Public License for more details.
*
* You should have received a copy of the GNU General Public License
* along with this program.  If not, see <http://www.gnu.org/licenses/>.
*
*/

#ifndef H_PALETTES
#define H_PALETTES

#include "libvideo.h"

#ifndef V4L2_PIX_FMT_SGBRG8
#define V4L2_PIX_FMT_SGBRG8 v4l2_fourcc('G','B','R','G')
#endif

#ifndef V4L2_PIX_FMT_SGRBG8
#define V4L2_PIX_FMT_SGRBG8 v4l2_fourcc('G','R','B','G')
#endif

#ifndef V4L2_PIX_FMT_SRGGB8
#define V4L2_PIX_FMT_SRGGB8 v4l2_fourcc('R','G','G','B')
#endif

#ifndef V4L2_PIX_FMT_SN9C20X_I420
#define V4L2_PIX_FMT_SN9C20X_I420  v4l2_fourcc('S', '9', '2', '0')
#endif

struct libv4l_palette{
	int libv4l_palette;
	int v4l1_palette;
	int v4l2_palette;
	int depth;
	char name[15];
};

#define VIDEO_PALETTE_UNDEFINED_V4L1	-1
#define COMPRESSED_FORMAT_DEPTH			-1

static const struct libv4l_palette libv4l_palettes[] = {
	{
		YUV420,
		VIDEO_PALETTE_YUV420,
		V4L2_PIX_FMT_YUV420,
		12,
		"YUV420"
	},
	{
		YUYV,
		VIDEO_PALETTE_YUYV,
		V4L2_PIX_FMT_YUYV,
		16,
		"YUYV"
	},
	{
		RGB24,
		VIDEO_PALETTE_RGB24,
		V4L2_PIX_FMT_RGB24,
		24,
		"RGB24"
	},
		{
		RGB32,
		VIDEO_PALETTE_RGB32,
		V4L2_PIX_FMT_RGB32,
		32,
		"RGB32"
	},
		{
		RGB555,
		VIDEO_PALETTE_RGB555,
		V4L2_PIX_FMT_RGB555,
		16,
		"RGB555"
	},
		{
		RGB565,
		VIDEO_PALETTE_RGB565,
		V4L2_PIX_FMT_RGB565,
		16,
		"RGB565"
	},
		{
		GREY,
		VIDEO_PALETTE_GREY,
		V4L2_PIX_FMT_GREY,
		8,
		"GREY"
	},
		{
		MJPEG,
		VIDEO_PALETTE_UNDEFINED_V4L1,
		V4L2_PIX_FMT_MJPEG,
		COMPRESSED_FORMAT_DEPTH,
		"MJPEG"
	},
		{
		JPEG,
		VIDEO_PALETTE_UNDEFINED_V4L1,
		V4L2_PIX_FMT_JPEG,
		COMPRESSED_FORMAT_DEPTH,
		"JPEG"
	},
	{
		MPEG,
		VIDEO_PALETTE_UNDEFINED_V4L1,
		V4L2_PIX_FMT_MPEG,
		COMPRESSED_FORMAT_DEPTH,
		"MPEG 1/2/4"
	},
	{
		HI240,
		VIDEO_PALETTE_HI240,
		V4L2_PIX_FMT_HI240,
		8,
		"HI240"
	},
	{
		UYVY,
		VIDEO_PALETTE_UYVY,
		V4L2_PIX_FMT_UYVY,
		16,
		"UYVY"
	},
	{
		YUV422P,
		VIDEO_PALETTE_YUV422P,
		V4L2_PIX_FMT_YUV422P,
		16,
		"YUV422P"
	},
	{
		YUV411P,
		VIDEO_PALETTE_YUV411P,
		V4L2_PIX_FMT_YUV411P,
		16,
		"YUV411P"
	},
	{
		YUV410P,
		VIDEO_PALETTE_YUV410P,
		V4L2_PIX_FMT_YUV410,
		9,
		"YUV410"
	},
	{
		RGB332,
		VIDEO_PALETTE_UNDEFINED_V4L1,
		V4L2_PIX_FMT_RGB332,
		8,
		"RGB332"
	},
	{
		RGB444,
		VIDEO_PALETTE_UNDEFINED_V4L1,
		V4L2_PIX_FMT_RGB444,
		16,
		"RGB444"
	},
	{
		RGB555X,
		VIDEO_PALETTE_UNDEFINED_V4L1,
		V4L2_PIX_FMT_RGB555X,
		16,
		"RGB555 BE"
	},
	{
		RGB565X,
		VIDEO_PALETTE_UNDEFINED_V4L1,
		V4L2_PIX_FMT_RGB565X,
		16,
		"RGB565 BE"
	},
	{
		BGR24,
		VIDEO_PALETTE_UNDEFINED_V4L1,
		V4L2_PIX_FMT_BGR24,
		24,
		"BGR24"
	},
	{
		BGR32,
		VIDEO_PALETTE_UNDEFINED_V4L1,
		V4L2_PIX_FMT_BGR32,
		32,
		"BGR32"
	},
	{
		Y16,
		VIDEO_PALETTE_UNDEFINED_V4L1,
		V4L2_PIX_FMT_Y16,
		16,
		"Y16"
	},
	{
		PAL8,
		VIDEO_PALETTE_UNDEFINED_V4L1,
		V4L2_PIX_FMT_PAL8,
		8,
		"PAL8"
	},
	{
		YVU410,
		VIDEO_PALETTE_UNDEFINED_V4L1,
		V4L2_PIX_FMT_YVU410,
		9,
		"YVU410"
	},
	{
		YVU420,
		VIDEO_PALETTE_UNDEFINED_V4L1,
		V4L2_PIX_FMT_YVU420,
		12,
		"YVU420"
	},
	{
		Y41P,
		VIDEO_PALETTE_UNDEFINED_V4L1,
		V4L2_PIX_FMT_Y41P,
		12,
		"Y41P"
	},
	{
		YUV444,
		VIDEO_PALETTE_UNDEFINED_V4L1,
		V4L2_PIX_FMT_YUV444,
		16,
		"YUV444"
	},
	{
		YUV555,
		VIDEO_PALETTE_UNDEFINED_V4L1,
		V4L2_PIX_FMT_YUV555,
		16,
		"YUV555"
	},
	{
		YUV565,
		VIDEO_PALETTE_UNDEFINED_V4L1,
		V4L2_PIX_FMT_YUV565,
		16,
		"YUV565"
	},
	{
		YUV32,
		VIDEO_PALETTE_UNDEFINED_V4L1,
		V4L2_PIX_FMT_YUV32,
		32,
		"YUV32"
	},
	{
		NV12,
		VIDEO_PALETTE_UNDEFINED_V4L1,
		V4L2_PIX_FMT_NV12,
		12,
		"NV12"
	},
	{
		NV21,
		VIDEO_PALETTE_UNDEFINED_V4L1,
		V4L2_PIX_FMT_NV21,
		12,
		"NV21"
	},
	{
		YYUV,
		VIDEO_PALETTE_UNDEFINED_V4L1,
		V4L2_PIX_FMT_YYUV,
		16,
		"YYUV"
	},
	{
		HM12,
		VIDEO_PALETTE_UNDEFINED_V4L1,
		V4L2_PIX_FMT_HM12,
		8,
		"HM12"
	},
	{
		SBGGR8,
		VIDEO_PALETTE_UNDEFINED_V4L1,
		V4L2_PIX_FMT_SBGGR8,
		8,
		"SBGGR8"
	},
	{
		SGBRG8,
		VIDEO_PALETTE_UNDEFINED_V4L1,
		V4L2_PIX_FMT_SGBRG8,
		8,
		"SGBRG8"
	},
	{
		SGRBG8,
		VIDEO_PALETTE_UNDEFINED_V4L1,
		V4L2_PIX_FMT_SGRBG8,
		8,
		"SGRBG8"
	},
	{
		SRGGB8,
		VIDEO_PALETTE_UNDEFINED_V4L1,
		V4L2_PIX_FMT_SRGGB8,
		8,
		"SRGGB8"
	},
	{
		SBGGR16,
		VIDEO_PALETTE_UNDEFINED_V4L1,
		V4L2_PIX_FMT_SBGGR16,
		16,
		"SBGGR16"
	},
/*	{
		DV,
		VIDEO_PALETTE_UNDEFINED_V4L1,
		V4L2_PIX_FMT_DV,
		, left out until more info
		"DV"
	},

	Old stuff
	{
		WNVA,
		VIDEO_PALETTE_UNDEFINED_V4L1,
		V4L2_PIX_FMT_WNVA,
		16,
		"WNVA"
	},*/

	{
		SN9C10X,
		VIDEO_PALETTE_UNDEFINED_V4L1,
		V4L2_PIX_FMT_SN9C10X,
		COMPRESSED_FORMAT_DEPTH,
		"SN9C10X"
	},
	{
		SN9C20X_I420,
		VIDEO_PALETTE_UNDEFINED_V4L1,
		V4L2_PIX_FMT_SN9C20X_I420,
		COMPRESSED_FORMAT_DEPTH,
		"SN9C20X_I420"
	},
	{
		PWC1,
		VIDEO_PALETTE_UNDEFINED_V4L1,
		V4L2_PIX_FMT_PWC1,
		COMPRESSED_FORMAT_DEPTH,
		"PWC1"
	},
	{
		PWC2,
		VIDEO_PALETTE_UNDEFINED_V4L1,
		V4L2_PIX_FMT_PWC2,
		COMPRESSED_FORMAT_DEPTH,
		"PWC2"
	},
	{
		ET61X251,
		VIDEO_PALETTE_UNDEFINED_V4L1,
		V4L2_PIX_FMT_ET61X251,
		COMPRESSED_FORMAT_DEPTH,
		"ET61X251"
	},
	{
		SPCA501,
		VIDEO_PALETTE_UNDEFINED_V4L1,
		V4L2_PIX_FMT_SPCA501,
		16,
		"SPCA501"
	},
	{
		SPCA505,
		VIDEO_PALETTE_UNDEFINED_V4L1,
		V4L2_PIX_FMT_SPCA505,
		16,
		"SPCA505"
	},
	{
		SPCA508,
		VIDEO_PALETTE_UNDEFINED_V4L1,
		V4L2_PIX_FMT_SPCA508,
		16,
		"SPCA508"
	},
	{
		SPCA561,
		VIDEO_PALETTE_UNDEFINED_V4L1,
		V4L2_PIX_FMT_SPCA561,
		COMPRESSED_FORMAT_DEPTH,
		"SPCA561"
	},
	{
		PAC207,
		VIDEO_PALETTE_UNDEFINED_V4L1,
		V4L2_PIX_FMT_PAC207,
		COMPRESSED_FORMAT_DEPTH,
		"PAC207"
	},
	{
		PJPG,
		VIDEO_PALETTE_UNDEFINED_V4L1,
		V4L2_PIX_FMT_PJPG,
		COMPRESSED_FORMAT_DEPTH,
		"PJPG"
	},
	{
		YVYU,
		VIDEO_PALETTE_UNDEFINED_V4L1,
		V4L2_PIX_FMT_YVYU,
		16,
		"YVYU"
	},
	{
		MR97310A,
		VIDEO_PALETTE_UNDEFINED_V4L1,
		V4L2_PIX_FMT_MR97310A,
		COMPRESSED_FORMAT_DEPTH,
		"MR97310A"
	},
	{
		SQ905C,
		VIDEO_PALETTE_UNDEFINED_V4L1,
		V4L2_PIX_FMT_SQ905C,
		COMPRESSED_FORMAT_DEPTH,
		"SQ905C"
	},


//Dont use the following two, use YUV420 and YUYV instead !!
	{
		YUV420P,
		VIDEO_PALETTE_YUV420P,
		0,
		12,
		"YUV420"
	},
		{
		YUV422,
		VIDEO_PALETTE_YUV422,
		0,
		8,
		"YUYV"
	},
	{
		YUV411,
		VIDEO_PALETTE_YUV411,
		V4L2_PIX_FMT_YUV411P,
		16,
		"YUV411"
	}

};

#endif //H_PALETTES
