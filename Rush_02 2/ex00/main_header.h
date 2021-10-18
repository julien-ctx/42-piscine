/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_header.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcauchet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/25 16:08:58 by jcauchet          #+#    #+#             */
/*   Updated: 2021/09/26 23:09:52 by jcauchet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MAIN_HEADER_H
# define MAIN_HEADER_H

long long		custom_atoi(char *str);
void			ft_putstr(char *str);
int				ft_strcmp(char *s1, char *s2);
char			*ft_strdup(char *src, int s_word);
int				ft_in_str(char charstr, char *charset);
int				ft_sizeword(char *str, char *charset);
int				ft_nbrword(char *str, char *charset);
char			**ft_split(char *str, char *charset);
int				ft_error(char *str);
int				count_char(char *file);
char			*copied_char(char *file);
char			**line_array(char *file);
int				ft_find_string(char **array, char *to_find);
char			*ft_itoa(long long nb);
#endif
