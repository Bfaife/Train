int		ft_strlen(char *str)
{
	inti	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}
