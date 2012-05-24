/*****************************************************************************
 * mpeg_utils.h
 *****************************************************************************
 *
 * Copyright (C) 2012 maki
 *
 * Authors: Masaki Tanaka <maki.rxrz@gmail.com>
 *
 * NYSL Version 0.9982 (en) (Unofficial)
 * ----------------------------------------
 * A. This software is "Everyone'sWare". It means:
 *   Anybody who has this software can use it as if he/she is
 *   the author.
 *
 *   A-1. Freeware. No fee is required.
 *   A-2. You can freely redistribute this software.
 *   A-3. You can freely modify this software. And the source
 *       may be used in any software with no limitation.
 *   A-4. When you release a modified version to public, you
 *       must publish it with your name.
 *
 * B. The author is not responsible for any kind of damages or loss
 *   while using or misusing this software, which is distributed
 *   "AS IS". No warranty of any kind is expressed or implied.
 *   You use AT YOUR OWN RISK.
 *
 * C. Copyrighted to maki.
 *
 * D. Above three clauses are applied both to source and binary
 *   form of this software.
 *
 ****************************************************************************/
#ifndef __MPEG_UTILS_H__
#define __MPEG_UTILS_H__

#include <inttypes.h>

#include "mpeg_common.h"

typedef struct {
    int64_t                 file_position;
    uint32_t                sample_size;
    int64_t                 pcr;
    int64_t                 video_key_pts;
    int64_t                 video_pts;
    int64_t                 video_dts;
    int64_t                 audio_pts;
    int64_t                 audio_dts;
    int64_t                 gop_number;
    uint8_t                 progressive_sequence;
    uint8_t                 closed_gop;
    uint8_t                 picture_coding_type;
    uint16_t                temporal_reference;
    uint8_t                 picture_structure;
    uint8_t                 progressive_frame;
    uint8_t                 repeat_first_field;
    uint8_t                 top_field_first;
} stream_info_t;

#ifdef __cplusplus
extern "C" {
#endif

extern int mpeg_api_create_sample_list( void *ih );

extern int mpeg_api_get_sample_info( void *ih, mpeg_sample_type sample_type, uint32_t sample_number, stream_info_t *stream_info );

extern int mpeg_api_get_sample_data( void *ih, mpeg_sample_type sample_type, uint32_t sample_number, uint8_t **dst_buffer, uint32_t *dst_read_size, get_sample_data_mode get_mode );

extern int64_t mpeg_api_get_pcr( void *ih );

extern int mpeg_api_get_video_frame( void *ih, stream_info_t *stream_info );

extern int mpeg_api_get_audio_frame( void *ih, stream_info_t *stream_info );

extern int mpeg_api_parse( void *ih );

extern int mpeg_api_get_stream_info( void *ih, stream_info_t *stream_info );

extern int mpeg_api_set_pmt_program_id( void *ih, uint16_t pmt_program_id );

extern void *mpeg_api_initialize_info( const char *mpegts );

extern void mpeg_api_release_info( void *ih );

#ifdef __cplusplus
}
#endif

#endif /* __MPEG_UTILS_H__ */