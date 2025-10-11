
ulong FUN_004a0450(undefined8 param_1,long param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined1 *puVar4;
  ulong uVar5;
  long in_FS_OFFSET;
  undefined1 local_98 [88];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((param_2 == 0) || (*(long *)(param_2 + 0x18) == 0)) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar5 = FUN_004ab7e0(param_1,"NULL",4);
      return uVar5;
    }
  }
  else {
    uVar1 = FUN_004a0440(local_98,0x50,param_2);
    uVar5 = (ulong)uVar1;
    if ((int)uVar1 < 0x50) {
      if ((int)uVar1 < 1) {
        iVar2 = FUN_004ab7e0(param_1,"<INVALID>",9);
        iVar3 = FUN_004aadf0(param_1,*(undefined8 *)(param_2 + 0x18),*(undefined4 *)(param_2 + 0x14)
                            );
        uVar5 = (ulong)(uint)(iVar2 + iVar3);
      }
      else {
        FUN_004ab7e0(param_1,local_98,uVar5);
      }
    }
    else if (uVar1 == 0x7fffffff) {
      FUN_0051f420();
      FUN_0051f540("../crypto/asn1/a_object.c",0xc4,"i2a_ASN1_OBJECT");
      uVar5 = 0xffffffff;
      FUN_0051f8f0(0xd,0xe7,0);
    }
    else {
      puVar4 = (undefined1 *)FUN_0041ad90((long)(int)(uVar1 + 1),"../crypto/asn1/a_object.c",199);
      if (puVar4 == (undefined1 *)0x0) {
        FUN_0051f420();
        FUN_0051f540("../crypto/asn1/a_object.c",200,"i2a_ASN1_OBJECT");
        uVar5 = 0xffffffff;
        FUN_0051f8f0(0xd,0xc0100,0);
      }
      else {
        FUN_004a0440(puVar4,uVar1 + 1,param_2);
        FUN_004ab7e0(param_1,puVar4,uVar5);
        if (puVar4 != local_98) {
          FUN_0041ad60(puVar4,"../crypto/asn1/a_object.c",0xd4);
        }
      }
    }
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return uVar5;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

