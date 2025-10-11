
void _nss_files_sethostent(void)

{
  __nss_files_data_setent(3,"/etc/hosts");
  return;
}

