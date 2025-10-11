
void _nss_files_gethostbyname_r
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6)

{
  _nss_files_gethostbyname3_r(param_1,2,param_2,param_3,param_4,param_5,param_6,0,0);
  return;
}

