
ulong * ossl_asn1_do_adb(long param_1,ulong *param_2,int param_3)

{
  ASN1_OBJECT *o;
  int iVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  long in_FS_OFFSET;
  long local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if ((*param_2 & 0x300) == 0) goto LAB_004a5b06;
  lVar2 = (*(code *)param_2[4])();
  o = *(ASN1_OBJECT **)(param_1 + *(long *)(lVar2 + 8));
  if (o == (ASN1_OBJECT *)0x0) {
    param_2 = *(ulong **)(lVar2 + 0x30);
joined_r0x004a5b48:
    if (param_2 != (ulong *)0x0) goto LAB_004a5b06;
    if (param_3 == 0) {
      param_2 = (ulong *)0x0;
      goto LAB_004a5b06;
    }
    ERR_new();
    uVar5 = 0x11c;
  }
  else {
    if ((*param_2 & 0x100) == 0) {
      local_38 = ASN1_INTEGER_get((ASN1_INTEGER *)o);
    }
    else {
      iVar1 = OBJ_obj2nid(o);
      local_38 = (long)iVar1;
    }
    if ((*(code **)(lVar2 + 0x10) == (code *)0x0) ||
       (iVar1 = (**(code **)(lVar2 + 0x10))(&local_38), iVar1 != 0)) {
      plVar3 = *(long **)(lVar2 + 0x18);
      if (0 < *(long *)(lVar2 + 0x20)) {
        lVar4 = 0;
        do {
          if (*plVar3 == local_38) {
            param_2 = (ulong *)(plVar3 + 1);
            goto LAB_004a5b06;
          }
          lVar4 = lVar4 + 1;
          plVar3 = plVar3 + 6;
        } while (lVar4 != *(long *)(lVar2 + 0x20));
      }
      param_2 = *(ulong **)(lVar2 + 0x28);
      goto joined_r0x004a5b48;
    }
    ERR_new();
    uVar5 = 0x103;
  }
  ERR_set_debug("../crypto/asn1/tasn_utl.c",uVar5,"ossl_asn1_do_adb");
  ERR_set_error(0xd,0xa4,0);
  param_2 = (ulong *)0x0;
LAB_004a5b06:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

