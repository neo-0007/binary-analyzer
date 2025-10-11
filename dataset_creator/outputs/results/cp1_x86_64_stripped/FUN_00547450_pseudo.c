
undefined4 FUN_00547450(long param_1,long param_2)

{
  int iVar1;
  long lVar2;
  undefined4 uVar3;
  long in_FS_OFFSET;
  undefined1 auStack_38 [8];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  lVar2 = FUN_0041aec0(0x28,"../crypto/packet.c",0x6b);
  *(long *)(param_1 + 0x28) = lVar2;
  if (lVar2 == 0) {
    FUN_0051f420();
    uVar3 = 0;
    FUN_0051f540("../crypto/packet.c",0x6c,"wpacket_intern_init_len");
    FUN_0051f8f0(0xf,0xc0100,0);
  }
  else {
    uVar3 = 1;
    if (param_2 != 0) {
      *(long *)(lVar2 + 0x18) = param_2;
      *(long *)(lVar2 + 0x10) = param_2;
      iVar1 = FUN_00547420(param_1,param_2,auStack_38);
      if (iVar1 == 0) {
        FUN_0041ad60(*(undefined8 *)(param_1 + 0x28),"../crypto/packet.c",0x77);
        *(undefined8 *)(param_1 + 0x28) = 0;
        uVar3 = 0;
      }
      else {
        uVar3 = 1;
        *(undefined8 *)(*(long *)(param_1 + 0x28) + 8) = 0;
      }
    }
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

