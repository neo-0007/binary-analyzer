
ulong ossl_namemap_add_names(long param_1,ulong param_2,char *param_3,char param_4)

{
  uint uVar1;
  ulong uVar2;
  char *pcVar3;
  char *pcVar4;
  size_t sVar5;
  
  if (param_1 == 0) {
    ERR_new();
    ERR_set_debug("../crypto/core_namemap.c",0x134,"ossl_namemap_add_names");
    ERR_set_error(0xf,0xc0102,0);
    return 0;
  }
  param_2 = param_2 & 0xffffffff;
  uVar2 = CRYPTO_THREAD_write_lock(*(undefined8 *)(param_1 + 8));
  if ((int)uVar2 == 0) {
    return uVar2;
  }
  pcVar4 = param_3;
  if (*param_3 != '\0') {
    do {
      pcVar3 = strchr(pcVar4,(int)param_4);
      sVar5 = (long)pcVar3 - (long)pcVar4;
      if (pcVar3 == (char *)0x0) {
        sVar5 = strlen(pcVar4);
      }
      uVar1 = namemap_name2num_n(param_1,pcVar4,sVar5);
      if ((param_4 == *pcVar4) || (*pcVar4 == '\0')) {
        ERR_new();
        ERR_set_debug("../crypto/core_namemap.c",0x149,"ossl_namemap_add_names");
        ERR_set_error(0xf,0x75,0);
        goto LAB_00416ff0;
      }
      if ((uint)param_2 == 0) {
        param_2 = (ulong)uVar1;
      }
      else if ((uVar1 != 0) && (uVar1 != (uint)param_2)) {
        ERR_new();
        ERR_set_debug("../crypto/core_namemap.c",0x14f,"ossl_namemap_add_names");
        ERR_set_error(0xf,0x76,"\"%.*s\" has an existing different identity %d (from \"%s\")",sVar5,
                      pcVar4,uVar1,param_3);
        goto LAB_00416ff0;
      }
      pcVar4 = pcVar4 + sVar5;
      if (pcVar3 != (char *)0x0) {
        pcVar4 = pcVar3 + 1;
      }
    } while (*pcVar4 != '\0');
    while (*param_3 != '\0') {
      pcVar4 = strchr(param_3,(int)param_4);
      sVar5 = (long)pcVar4 - (long)param_3;
      if (pcVar4 == (char *)0x0) {
        sVar5 = strlen(param_3);
      }
      uVar1 = namemap_name2num_n(param_1,param_3,sVar5);
      if (uVar1 == 0) {
        uVar1 = namemap_add_name_n_part_0(param_1,param_2,param_3,sVar5);
      }
      if ((uint)param_2 == 0) {
        param_2 = (ulong)uVar1;
      }
      else if (uVar1 != (uint)param_2) {
        ERR_new();
        ERR_set_debug("../crypto/core_namemap.c",0x163,"ossl_namemap_add_names");
        ERR_set_error(0xf,0xc0103,"Got number %d when expecting %d",uVar1,param_2);
LAB_00416ff0:
        CRYPTO_THREAD_unlock(*(undefined8 *)(param_1 + 8));
        return 0;
      }
      pcVar3 = param_3 + sVar5;
      param_3 = pcVar4 + 1;
      if (pcVar4 == (char *)0x0) {
        param_3 = pcVar3;
      }
    }
  }
  CRYPTO_THREAD_unlock(*(undefined8 *)(param_1 + 8));
  return param_2;
}

