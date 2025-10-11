
void _nss_files_setspent(void)

{
  __nss_files_data_setent(10,"/etc/shadow");
  return;
}

