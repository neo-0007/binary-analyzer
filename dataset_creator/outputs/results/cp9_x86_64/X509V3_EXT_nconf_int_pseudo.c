
long X509V3_EXT_nconf_int
               (undefined8 param_1,undefined8 param_2,long param_3,char *param_4,undefined8 param_5)

{
  undefined8 uVar1;
  undefined4 uVar2;
  int iVar3;
  long lVar4;
  undefined8 local_40 [2];
  
  local_40[0] = param_5;
  uVar2 = v3_check_critical(local_40);
  iVar3 = v3_check_generic(local_40);
  uVar1 = local_40[0];
  if (iVar3 == 0) {
    iVar3 = OBJ_sn2nid(param_4);
    lVar4 = do_ext_nconf(param_1,param_2,iVar3,uVar2,uVar1);
    if (lVar4 == 0) {
      if (param_3 == 0) {
        ERR_new();
        ERR_set_debug("../crypto/x509/v3_conf.c",0x34,"X509V3_EXT_nconf_int");
        ERR_set_error(0x22,0x80,"name=%s, value=%s",param_4,local_40[0]);
      }
      else {
        ERR_new();
        ERR_set_debug("../crypto/x509/v3_conf.c",0x30,"X509V3_EXT_nconf_int");
        ERR_set_error(0x22,0x80,"section=%s, name=%s, value=%s",param_3,param_4,local_40[0]);
      }
    }
  }
  else {
    lVar4 = v3_generic_extension(param_4,local_40[0],uVar2,iVar3,param_2);
  }
  return lVar4;
}

