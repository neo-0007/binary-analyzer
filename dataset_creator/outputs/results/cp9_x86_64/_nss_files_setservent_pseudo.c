
void _nss_files_setservent(void)

{
  __nss_files_data_setent(8,"/etc/services");
  return;
}

