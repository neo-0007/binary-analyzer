
void get_legacy_evp_names(int param_1,int param_2,long param_3,undefined8 param_4)

{
  undefined4 uVar1;
  int iVar2;
  char *pcVar3;
  ASN1_OBJECT *a;
  long in_FS_OFFSET;
  char acStack_68 [56];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 != 0) {
    pcVar3 = OBJ_nid2sn(param_1);
    uVar1 = ossl_namemap_add_name(param_4,0,pcVar3);
    pcVar3 = OBJ_nid2ln(param_1);
    param_1 = ossl_namemap_add_name(param_4,uVar1,pcVar3);
  }
  if (param_2 != 0) {
    pcVar3 = OBJ_nid2sn(param_2);
    uVar1 = ossl_namemap_add_name(param_4,param_1,pcVar3);
    pcVar3 = OBJ_nid2ln(param_2);
    param_1 = ossl_namemap_add_name(param_4,uVar1,pcVar3);
    a = OBJ_nid2obj(param_2);
    if (a != (ASN1_OBJECT *)0x0) {
      iVar2 = OBJ_obj2txt(acStack_68,0x32,a,1);
      if (0 < iVar2) {
        param_1 = ossl_namemap_add_name(param_4,param_1,acStack_68);
      }
    }
  }
  if (param_3 == 0) {
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
  else if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    ossl_namemap_add_name(param_4,param_1,param_3);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

