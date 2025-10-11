
void __gconv_load_conf(void)

{
  pthread_once(&once,__gconv_read_conf);
  return;
}

