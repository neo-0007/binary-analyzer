
ulong FUN_00464e30(undefined8 *param_1,long param_2,ulong *param_3,ulong param_4)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long in_FS_OFFSET;
  long local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar3 = FUN_0043b840();
  if ((int)uVar3 != 0) {
    if (*(int *)((long)param_1 + 0x1c) == 0) {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar3 = FUN_00464ab0(param_1,param_2,param_3,param_4,*(byte *)(param_1 + 3) & 1);
        return uVar3;
      }
      goto LAB_004650a3;
    }
    if (*(int *)((long)param_1 + 0x1c) == 1) {
      if (param_2 == 0) {
        *param_3 = param_1[7];
        uVar3 = 1;
      }
      else if (param_4 < (ulong)param_1[7]) {
        FUN_0051f420();
        FUN_0051f540("../providers/implementations/exchange/dh_exch.c",0xc0,"dh_X9_42_kdf_derive");
        FUN_0051f8f0(0x39,0x6a,0);
        uVar3 = 0;
      }
      else if ((param_1[1] == 0) || (param_1[2] == 0)) {
        FUN_0051f420();
        FUN_0051f540("../providers/implementations/exchange/dh_exch.c",0x98,"dh_plain_derive");
        FUN_0051f8f0(0x39,0x80,0);
        uVar3 = 0;
      }
      else {
        iVar1 = FUN_004d5f10();
        lVar5 = (long)iVar1;
        local_48 = lVar5;
        lVar4 = FUN_0041bc60(lVar5,"../providers/implementations/exchange/dh_exch.c",0xc5);
        if (lVar4 == 0) {
          FUN_0051f420();
          FUN_0051f540("../providers/implementations/exchange/dh_exch.c",0xc6,"dh_X9_42_kdf_derive")
          ;
          FUN_0051f8f0(0x39,0xc0100,0);
          uVar3 = 0;
        }
        else {
          uVar2 = FUN_00464ab0(param_1,lVar4,&local_48,lVar5,1);
          lVar5 = local_48;
          if (uVar2 != 0) {
            uVar3 = param_1[7];
            if (*(int *)((long)param_1 + 0x1c) == 1) {
              uVar2 = FUN_004d4b50(param_2,uVar3,lVar4,local_48,param_1[8],param_1[5],param_1[6],
                                   param_1[4],*param_1,0);
              if (uVar2 == 0) goto LAB_00464f37;
              uVar3 = param_1[7];
            }
            *param_3 = uVar3;
            uVar2 = 1;
          }
LAB_00464f37:
          FUN_0041c0b0(lVar4,lVar5,"../providers/implementations/exchange/dh_exch.c",0xda);
          uVar3 = (ulong)uVar2;
        }
      }
    }
    else {
      uVar3 = 0;
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar3;
  }
LAB_004650a3:
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

