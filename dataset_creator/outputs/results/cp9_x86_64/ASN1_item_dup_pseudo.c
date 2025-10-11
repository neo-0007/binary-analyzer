
void * ASN1_item_dup(ASN1_ITEM *it,void *x)

{
  int iVar1;
  code *pcVar2;
  long in_FS_OFFSET;
  ASN1_VALUE *local_50;
  uchar *local_48;
  uchar *local_40;
  void *local_38;
  undefined8 local_30;
  undefined8 local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_48 = (uchar *)0x0;
  local_30 = 0;
  local_28 = 0;
  local_50 = (ASN1_VALUE *)x;
  if (x == (void *)0x0) goto LAB_005a1710;
  if ((((byte)(it->itype - 1U) < 2) || (it->itype == '\x06')) && (it->funcs != (void *)0x0)) {
    pcVar2 = *(code **)((long)it->funcs + 0x18);
    if (pcVar2 == (code *)0x0) goto LAB_005a1732;
    iVar1 = (*pcVar2)(0xe,&local_50,it,0);
    if (((iVar1 != 0) && (iVar1 = (*pcVar2)(0x10,&local_50,it,&local_30), iVar1 != 0)) &&
       (iVar1 = (*pcVar2)(0x11,&local_50,it,&local_28), iVar1 != 0)) goto LAB_005a1732;
  }
  else {
    pcVar2 = (code *)0x0;
LAB_005a1732:
    iVar1 = ASN1_item_i2d(local_50,&local_48,it);
    if (local_48 == (uchar *)0x0) {
      ERR_new();
      ERR_set_debug("../crypto/asn1/a_dup.c",0x51,"ASN1_item_dup");
      ERR_set_error(0xd,0xc0100,0);
      x = (void *)0x0;
      goto LAB_005a1710;
    }
    local_40 = local_48;
    local_38 = (void *)ASN1_item_d2i_ex(0,&local_40,(long)iVar1,it,local_30,local_28);
    CRYPTO_free(local_48);
    x = local_38;
    if ((pcVar2 == (code *)0x0) ||
       (iVar1 = (*pcVar2)(0xf,&local_38,it,local_50), x = local_38, iVar1 != 0)) goto LAB_005a1710;
  }
  ERR_new();
  x = (void *)0x0;
  ERR_set_debug("../crypto/asn1/a_dup.c",0x5f,"ASN1_item_dup");
  ERR_set_error(0xd,100,"Type=%s",it->sname);
LAB_005a1710:
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail_local();
  }
  return x;
}

