
int asn1_collect_constprop_0(BUF_MEM *param_1,long *param_2,long param_3,byte param_4,int param_5)

{
  char *pcVar1;
  char *pcVar2;
  size_t __n;
  int iVar3;
  undefined4 extraout_var;
  long lVar4;
  long in_FS_OFFSET;
  byte local_6c;
  char local_52;
  char local_51;
  char *local_50;
  size_t local_48;
  long local_40;
  
  local_50 = (char *)*param_2;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_6c = param_4 & 1;
  if (param_3 < 1) {
LAB_004a0750:
    if (local_6c != 0) {
      ERR_new();
      ERR_set_debug("../crypto/asn1/tasn_dec.c",0x442,"asn1_collect");
      ERR_set_error(0xd,0x89,0);
      iVar3 = 0;
      goto LAB_004a06ed;
    }
  }
  else {
    if (param_3 == 1) goto LAB_004a05c0;
    while ((*local_50 != '\0' || (local_50[1] != '\0'))) {
LAB_004a05c0:
      do {
        pcVar1 = local_50;
        iVar3 = asn1_check_tlen(&local_48,0,0,&local_51,&local_52,&local_50,param_3,
                                0xffffffffffffffff,0,0,0);
        __n = local_48;
        if (iVar3 == 0) {
          ERR_new();
          ERR_set_debug("../crypto/asn1/tasn_dec.c",0x431,"asn1_collect");
          ERR_set_error(0xd,0x8010a,0);
          iVar3 = 0;
          goto LAB_004a06ed;
        }
        if (local_52 == '\0') {
          if (local_48 != 0) {
            lVar4 = (long)(int)param_1->length;
            iVar3 = BUF_MEM_grow_clean(param_1,lVar4 + local_48);
            pcVar2 = local_50;
            if (CONCAT44(extraout_var,iVar3) == 0) {
              ERR_new();
              ERR_set_debug("../crypto/asn1/tasn_dec.c",0x44f,"collect_data");
              ERR_set_error(0xd,0xc0100,0);
              iVar3 = 0;
              goto LAB_004a06ed;
            }
            memcpy(param_1->data + lVar4,local_50,__n);
            local_50 = pcVar2 + __n;
          }
        }
        else {
          if (param_5 == 5) {
            ERR_new();
            ERR_set_debug("../crypto/asn1/tasn_dec.c",0x438,"asn1_collect");
            ERR_set_error(0xd,0xc5,0);
            iVar3 = 0;
            goto LAB_004a06ed;
          }
          iVar3 = asn1_collect_constprop_0(param_1,&local_50,local_48,(int)local_51,param_5 + 1);
          if (iVar3 == 0) goto LAB_004a06ed;
        }
        param_3 = param_3 - ((long)local_50 - (long)pcVar1);
        if (param_3 < 1) goto LAB_004a0750;
      } while (param_3 == 1);
    }
    local_50 = local_50 + 2;
    if (local_6c == 0) {
      ERR_new();
      ERR_set_debug("../crypto/asn1/tasn_dec.c",0x428,"asn1_collect");
      ERR_set_error(0xd,0x9f,0);
      iVar3 = 0;
      goto LAB_004a06ed;
    }
  }
  *param_2 = (long)local_50;
  iVar3 = 1;
LAB_004a06ed:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail_local();
  }
  return iVar3;
}

