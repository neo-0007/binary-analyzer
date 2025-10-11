
long FUN_00456d60(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long in_FS_OFFSET;
  ulong local_440;
  undefined1 local_438 [1032];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_440 = 0;
  uVar2 = FUN_00485290(*param_2);
  lVar3 = param_2[2];
  if (lVar3 != 0) {
    iVar1 = FUN_00549660(local_438,0x400,&local_440,0,1,param_2 + 3);
    if (iVar1 == 0) {
      FUN_0051f420();
      lVar3 = 0;
      FUN_0051f540("../providers/implementations/encode_decode/encode_key2any.c",0x74,
                   "p8info_to_encp8");
      FUN_0051f8f0(0x39,0x9f,0);
    }
    else {
      lVar3 = FUN_0055cad0(0xffffffff,param_2[2],local_438,local_440 & 0xffffffff,0,0,0,param_1,
                           uVar2,0);
      FUN_004227b0(local_438,local_440);
    }
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return lVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

