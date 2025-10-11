
void _nss_files_setprotoent(void)

{
  __nss_files_data_setent(5,"/etc/protocols");
  return;
}

