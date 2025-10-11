
int ctlog_store_load_log(long param_1,int param_2,long *param_3)

{
  CONF *conf;
  undefined8 *puVar1;
  int iVar2;
  char *group;
  char *pcVar3;
  char *pcVar4;
  undefined8 uVar5;
  long in_FS_OFFSET;
  undefined8 local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_48 = 0;
  if (param_1 != 0) {
    group = (char *)CRYPTO_strndup(param_1,(long)param_2,"../crypto/ct/ct_log.c",0xc5);
    if (group == (char *)0x0) {
LAB_0062240a:
      iVar2 = -1;
      CTLOG_free(local_48);
      ERR_new();
      ERR_set_debug("../crypto/ct/ct_log.c",0xdd,"ctlog_store_load_log");
      ERR_set_error(0x32,0xc0100,0);
      goto LAB_00622376;
    }
    conf = (CONF *)param_3[1];
    puVar1 = (undefined8 *)*param_3;
    pcVar3 = NCONF_get_string(conf,group,"description");
    if (pcVar3 == (char *)0x0) {
      ERR_new();
      ERR_set_debug("../crypto/ct/ct_log.c",0x9a,"ctlog_new_from_conf");
      uVar5 = 0x6f;
LAB_006223c0:
      ERR_set_error(0x32,uVar5,0);
      CRYPTO_free(group);
    }
    else {
      pcVar4 = NCONF_get_string(conf,group,"key");
      if (pcVar4 == (char *)0x0) {
        ERR_new();
        ERR_set_debug("../crypto/ct/ct_log.c",0xa0,"ctlog_new_from_conf");
        uVar5 = 0x70;
        goto LAB_006223c0;
      }
      iVar2 = CTLOG_new_from_base64_ex(&local_48,pcVar4,pcVar3,*puVar1,puVar1[1]);
      CRYPTO_free(group);
      if (iVar2 < 0) goto LAB_00622376;
      if (iVar2 != 0) {
        iVar2 = OPENSSL_sk_push(*(undefined8 *)(*param_3 + 0x10),local_48);
        if (iVar2 != 0) goto LAB_00622370;
        goto LAB_0062240a;
      }
    }
    param_3[2] = param_3[2] + 1;
  }
LAB_00622370:
  iVar2 = 1;
LAB_00622376:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

