
ulong FUN_004b07b0(long param_1,int param_2,ulong param_3,long *param_4)

{
  int iVar1;
  long lVar2;
  undefined4 *puVar3;
  undefined8 uVar4;
  uint uVar5;
  ulong uVar6;
  long in_FS_OFFSET;
  undefined1 local_34 [4];
  long local_30;
  
  lVar2 = *(long *)(param_1 + 0x40);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar5 = (uint)param_3;
  if (param_2 < 0xd) {
    switch(param_2) {
    case 1:
switchD_004b07f7_caseD_1:
      iVar1 = FUN_00702400(lVar2,param_3,0);
      uVar6 = (ulong)iVar1;
      break;
    case 2:
      iVar1 = FUN_007020f0();
      uVar6 = (ulong)iVar1;
      break;
    case 3:
switchD_004b07f7_caseD_3:
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar6 = FUN_006fdd50();
        return uVar6;
      }
      goto LAB_004b0b74;
    default:
switchD_004b07f7_caseD_4:
      uVar6 = 0;
      break;
    case 8:
      uVar6 = (ulong)*(int *)(param_1 + 0x2c);
      break;
    case 9:
      *(uint *)(param_1 + 0x2c) = uVar5;
      uVar6 = 1;
      break;
    case 0xb:
      iVar1 = FUN_006fd670();
      if (iVar1 != -1) goto switchD_004b07f7_caseD_c;
      FUN_0051f420();
      FUN_0051f540("../crypto/bio/bss_file.c",0x146,"file_ctrl");
      puVar3 = (undefined4 *)FUN_006d2700();
      FUN_0051f8f0(2,*puVar3,"calling fflush()");
      FUN_0051f420();
      uVar4 = 0x148;
LAB_004b0a6a:
      uVar6 = 0;
      FUN_0051f540("../crypto/bio/bss_file.c",uVar4,"file_ctrl");
      FUN_0051f8f0(0x20,0x80002,0);
      break;
    case 0xc:
switchD_004b07f7_caseD_c:
      uVar6 = 1;
    }
  }
  else {
    switch(param_2) {
    case 0x6a:
      if (((*(int *)(param_1 + 0x2c) != 0) && (*(int *)(param_1 + 0x28) != 0)) && (lVar2 != 0)) {
        FUN_006fd190();
        *(undefined4 *)(param_1 + 0x30) = 0;
      }
      *(long **)(param_1 + 0x40) = param_4;
      *(uint *)(param_1 + 0x2c) = uVar5 & 1;
      uVar6 = 1;
      *(undefined4 *)(param_1 + 0x28) = 1;
      break;
    case 0x6b:
      if (param_4 == (long *)0x0) goto switchD_004b07f7_caseD_c;
      *param_4 = lVar2;
      uVar6 = 1;
      break;
    case 0x6c:
      if (*(int *)(param_1 + 0x2c) != 0) {
        if ((*(int *)(param_1 + 0x28) != 0) && (lVar2 != 0)) {
          FUN_006fd190();
          *(undefined8 *)(param_1 + 0x40) = 0;
          *(undefined4 *)(param_1 + 0x30) = 0;
        }
        *(undefined4 *)(param_1 + 0x28) = 0;
      }
      *(uint *)(param_1 + 0x2c) = uVar5 & 1;
      if ((param_3 & 8) == 0) {
        if ((uVar5 & 6) == 6) {
          FUN_0041c470(local_34,&DAT_007e91ec,4);
        }
        else if ((param_3 & 4) == 0) {
          uVar6 = (ulong)(uVar5 & 2);
          if ((param_3 & 2) == 0) {
            FUN_0051f420();
            FUN_0051f540("../crypto/bio/bss_file.c",0x11a,"file_ctrl");
            FUN_0051f8f0(0x20,0x65,0);
            break;
          }
          FUN_0041c470(local_34,"r",4);
        }
        else {
          FUN_0041c470(local_34,&DAT_00821677,4);
        }
      }
      else if ((param_3 & 2) == 0) {
        FUN_0041c470(local_34,"a",4);
      }
      else {
        FUN_0041c470(local_34,&DAT_007e91e9,4);
      }
      lVar2 = thunk_FUN_006fda20(param_4,local_34);
      if (lVar2 == 0) {
        FUN_0051f420();
        FUN_0051f540("../crypto/bio/bss_file.c",0x129,"file_ctrl");
        puVar3 = (undefined4 *)FUN_006d2700();
        FUN_0051f8f0(2,*puVar3,"calling fopen(%s, %s)",param_4,local_34);
        FUN_0051f420();
        uVar4 = 300;
        goto LAB_004b0a6a;
      }
      *(long *)(param_1 + 0x40) = lVar2;
      uVar6 = 1;
      *(undefined4 *)(param_1 + 0x28) = 1;
      FUN_004ab6c0(param_1,0);
      break;
    default:
      goto switchD_004b07f7_caseD_4;
    case 0x80:
      goto switchD_004b07f7_caseD_1;
    case 0x85:
      goto switchD_004b07f7_caseD_3;
    }
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar6;
  }
LAB_004b0b74:
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

