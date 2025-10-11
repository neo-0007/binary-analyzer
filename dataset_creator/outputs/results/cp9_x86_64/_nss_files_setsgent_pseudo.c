
void _nss_files_setsgent(void)

{
  __nss_files_data_setent(9,"/etc/gshadow");
  return;
}

