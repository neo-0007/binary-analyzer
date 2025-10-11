
long FUN_004a0a40(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  ulong uVar1;
  long lVar2;
  undefined4 uVar3;
  long in_FS_OFFSET;
  int local_38;
  undefined1 local_34 [4];
  undefined8 local_30;
  undefined8 local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_30 = *param_2;
  uVar1 = FUN_004a1ba0(&local_30,&local_28,&local_38,local_34,param_3);
  if ((uVar1 & 0x80) == 0) {
    if (local_38 == 6) {
      lVar2 = FUN_004a0770(param_1,&local_30,local_28);
      if (lVar2 != 0) {
        *param_2 = local_30;
      }
      goto LAB_004a0aac;
    }
    uVar3 = 0x74;
  }
  else {
    uVar3 = 0x66;
  }
  FUN_0051f420();
  FUN_0051f540("../crypto/asn1/a_object.c",0xf0,"d2i_ASN1_OBJECT");
  FUN_0051f8f0(0xd,uVar3,0);
  lVar2 = 0;
LAB_004a0aac:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return lVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

