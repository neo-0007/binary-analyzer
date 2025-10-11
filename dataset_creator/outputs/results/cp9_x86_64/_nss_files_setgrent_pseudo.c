
void _nss_files_setgrent(void)

{
  __nss_files_data_setent(2,"/etc/group");
  return;
}

