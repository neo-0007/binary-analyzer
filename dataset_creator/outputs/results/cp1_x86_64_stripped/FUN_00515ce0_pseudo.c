
ulong FUN_00515ce0(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  int iVar11;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  undefined4 local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar5 = FUN_00513cf0();
  uVar6 = FUN_00513d10(param_1);
  lVar7 = FUN_00515780(lVar5);
  lVar8 = thunk_FUN_0041cdd0(param_2,"data-type");
  if (lVar8 != 0) {
    local_58 = 0;
    uVar9 = FUN_0041e0b0(lVar8,&local_58,0);
    if ((int)uVar9 == 0) goto LAB_00515d5b;
    FUN_0041ad60(param_3[4],"../crypto/encode_decode/decoder_pkey.c",0x5f);
    param_3[4] = local_58;
  }
  lVar8 = thunk_FUN_0041cdd0(param_2,"reference");
  if ((lVar8 == 0) || (*(int *)(lVar8 + 8) != 5)) {
LAB_00515db8:
    uVar9 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(lVar8 + 0x10);
    uVar2 = *(undefined8 *)(lVar8 + 0x18);
    iVar3 = FUN_00436480(param_3[3]);
    if (0 < iVar3) {
      iVar11 = 0;
      do {
        lVar8 = FUN_004364a0(param_3[3],iVar11);
        lVar10 = FUN_0053e6e0(lVar8);
        if (lVar7 == lVar10) {
          iVar4 = FUN_0053e930(lVar8);
          if (iVar4 != 0) {
            iVar4 = FUN_0053e720(lVar8,param_3[4]);
            if (iVar4 != 0) {
              iVar3 = FUN_0053e0e0(lVar8);
              if (iVar3 == 0) goto LAB_00515db8;
              if (lVar8 != 0) goto LAB_00515e4a;
              goto LAB_00515ef0;
            }
          }
        }
        iVar11 = iVar11 + 1;
      } while (iVar11 != iVar3);
    }
    lVar8 = FUN_0053e6a0(*param_3,param_3[4],param_3[1]);
    if (lVar8 != 0) {
      lVar10 = FUN_0053e6e0(lVar8);
      if (lVar7 == lVar10) {
LAB_00515e4a:
        lVar5 = FUN_0053e950(lVar8,uVar1,uVar2);
      }
      else {
        local_48 = *(undefined4 *)(param_3 + 2);
        local_50 = 0;
        local_58 = lVar8;
        (**(code **)(lVar5 + 0x78))(uVar6,uVar1,uVar2,FUN_0053d1c0,&local_58);
        lVar5 = local_50;
      }
      lVar7 = 0;
      if (lVar5 != 0) {
        lVar7 = FUN_0053d900(lVar8,lVar5);
        if (lVar7 == 0) {
          FUN_0053e7e0(lVar8,lVar5);
        }
      }
      *(long *)param_3[5] = lVar7;
      FUN_0053e0f0(lVar8);
    }
LAB_00515ef0:
    uVar9 = (ulong)(*(long *)param_3[5] != 0);
  }
LAB_00515d5b:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar9;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

