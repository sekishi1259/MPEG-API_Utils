/*****************************************************************************
 * avs_utils.h
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
#ifndef __AVS_UTILS_H__
#define __AVS_UTILS_H__

typedef struct {
    char *string;
    int32_t start;
    int32_t end;
} avs_trim_info_t;

#ifdef __cplusplus
extern "C" {
#endif

extern int avs_string_erase_invalid_strings( char *str );

extern char *avs_string_get_fuction_parameters( char **str, const char *search_word );

extern int avs_string_convert_calculate_string_to_result_number( avs_trim_info_t* info );

#ifdef __cplusplus
}
#endif

#endif /* __AVS_UTILS_H__ */