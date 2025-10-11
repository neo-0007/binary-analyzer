
ulong FUN_00465aa0(undefined8 *param_1,long param_2,ulong *param_3,ulong param_4)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  long in_FS_OFFSET;
  ulong local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(int *)((long)param_1 + 0x1c) == 0) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar4 = FUN_004658d0();
      return uVar4;
    }
    goto LAB_00465cdb;
  }
  if (*(int *)((long)param_1 + 0x1c) == 1) {
    if (param_2 == 0) {
      *param_3 = param_1[7];
      uVar4 = 1;
    }
    else if (param_4 < (ulong)param_1[7]) {
      FUN_0051f420();
      FUN_0051f540("../providers/implementations/exchange/ecdh_exch.c",0x209,"ecdh_X9_63_kdf_derive"
                  );
      FUN_0051f8f0(0x39,0x6a,0);
      uVar4 = 0;
    }
    else {
      if ((param_1[1] == 0) || (param_1[2] == 0)) {
        FUN_0051f420();
        FUN_0051f540("../providers/implementations/exchange/ecdh_exch.c",0x1ba,"ecdh_plain_derive");
        FUN_0051f8f0(0x39,0x80,0);
        goto LAB_00465bc0;
      }
      lVar3 = FUN_004ee2d0();
      uVar4 = 0;
      if (lVar3 != 0) {
        iVar1 = FUN_004efad0(lVar3);
        uVar4 = (long)iVar1 + 7U >> 3;
      }
      local_48 = uVar4;
      lVar3 = FUN_0041bc60(uVar4,"../providers/implementations/exchange/ecdh_exch.c",0x20e);
      if (lVar3 == 0) {
        FUN_0051f420();
        FUN_0051f540("../providers/implementations/exchange/ecdh_exch.c",0x20f,
                     "ecdh_X9_63_kdf_derive");
        FUN_0051f8f0(0x39,0xc0100,0);
        uVar4 = 0;
      }
      else {
        uVar2 = FUN_004658d0(param_1,lVar3,&local_48,uVar4);
        uVar4 = local_48;
        if (uVar2 != 0) {
          uVar2 = FUN_004f5db0(param_2,param_1[7],lVar3,local_48,param_1[5],param_1[6],param_1[4],
                               *param_1,0);
          if (uVar2 != 0) {
            *param_3 = param_1[7];
            uVar2 = 1;
          }
        }
        FUN_0041c0b0(lVar3,uVar4,"../providers/implementations/exchange/ecdh_exch.c",0x221);
        uVar4 = (ulong)uVar2;
      }
    }
  }
  else {
LAB_00465bc0:
    uVar4 = 0;
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar4;
  }
LAB_00465cdb:
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

