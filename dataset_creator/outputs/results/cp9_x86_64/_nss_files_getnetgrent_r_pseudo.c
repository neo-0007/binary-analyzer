
void _nss_files_getnetgrent_r(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _nss_netgroup_parseline(param_1 + 0x30,param_1,param_2,param_3,param_4);
  return;
}

