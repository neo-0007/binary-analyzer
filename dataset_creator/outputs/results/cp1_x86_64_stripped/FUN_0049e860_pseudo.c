
undefined8 FUN_0049e860(code *param_1,code *param_2,long param_3)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  long in_FS_OFFSET;
  long local_40;
  long local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_3 != 0) {
    iVar1 = (*param_1)(param_3,0);
    if (0 < iVar1) {
      lVar2 = FUN_0041ad90((long)(iVar1 + 10),"../crypto/asn1/a_dup.c",0x1e);
      if (lVar2 != 0) {
        local_40 = lVar2;
        iVar1 = (*param_1)(param_3,&local_40);
        local_38 = lVar2;
        uVar3 = (*param_2)(0,&local_38,(long)iVar1);
        FUN_0041ad60(lVar2,"../crypto/asn1/a_dup.c",0x27);
        goto LAB_0049e8f6;
      }
      FUN_0051f420();
      FUN_0051f540("../crypto/asn1/a_dup.c",0x20,"ASN1_dup");
      FUN_0051f8f0(0xd,0xc0100,0);
    }
  }
  uVar3 = 0;
LAB_0049e8f6:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

