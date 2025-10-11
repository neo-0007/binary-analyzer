
long FUN_005b3640(undefined8 param_1,long param_2,int *param_3,code *param_4,undefined8 param_5,
                 undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  long lVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  int *piVar8;
  long in_FS_OFFSET;
  uint local_44;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar2 = FUN_0043b840();
  lVar4 = 0;
  if (iVar2 != 0) {
    lVar4 = FUN_0041aec0(0x128,"../providers/implementations/rands/drbg.c",0x311);
    if (lVar4 == 0) {
      FUN_0051f420();
      FUN_0051f540("../providers/implementations/rands/drbg.c",0x313,"ossl_rand_drbg_new");
      FUN_0051f8f0(0x39,0xc0100,0);
    }
    else {
      *(undefined8 *)(lVar4 + 8) = param_1;
      *(undefined8 *)(lVar4 + 0x20) = param_7;
      *(undefined8 *)(lVar4 + 0x10) = param_5;
      *(undefined8 *)(lVar4 + 0x18) = param_6;
      *(undefined8 *)(lVar4 + 0x28) = param_8;
      uVar3 = thunk_FUN_00768c70();
      *(long *)(lVar4 + 0x30) = param_2;
      *(undefined4 *)(lVar4 + 0x78) = uVar3;
      if ((param_3 != (int *)0x0) && (iVar2 = *param_3, piVar7 = param_3, iVar5 = iVar2, iVar2 != 0)
         ) {
        do {
          piVar8 = param_3;
          iVar6 = iVar2;
          if (iVar5 == 8) {
            *(undefined8 *)(lVar4 + 0x38) = *(undefined8 *)(piVar7 + 2);
            break;
          }
          piVar1 = piVar7 + 4;
          piVar7 = piVar7 + 4;
          iVar5 = *piVar1;
        } while (*piVar1 != 0);
        do {
          piVar7 = param_3;
          iVar5 = iVar2;
          if (iVar6 == 9) {
            *(undefined8 *)(lVar4 + 0x40) = *(undefined8 *)(piVar8 + 2);
            break;
          }
          piVar1 = piVar8 + 4;
          piVar8 = piVar8 + 4;
          iVar6 = *piVar1;
        } while (*piVar1 != 0);
        do {
          piVar8 = param_3;
          iVar6 = iVar2;
          if (iVar5 == 10) {
            *(undefined8 *)(lVar4 + 0x48) = *(undefined8 *)(piVar7 + 2);
            break;
          }
          piVar1 = piVar7 + 4;
          piVar7 = piVar7 + 4;
          iVar5 = *piVar1;
        } while (*piVar1 != 0);
        do {
          piVar7 = param_3;
          iVar5 = iVar2;
          if (iVar6 == 0xf) {
            *(undefined8 *)(lVar4 + 0x50) = *(undefined8 *)(piVar8 + 2);
            break;
          }
          piVar1 = piVar8 + 4;
          piVar8 = piVar8 + 4;
          iVar6 = *piVar1;
        } while (*piVar1 != 0);
        do {
          piVar8 = param_3;
          iVar6 = iVar2;
          if (iVar5 == 7) {
            *(undefined8 *)(lVar4 + 0x58) = *(undefined8 *)(piVar7 + 2);
            break;
          }
          piVar1 = piVar7 + 4;
          piVar7 = piVar7 + 4;
          iVar5 = *piVar1;
        } while (*piVar1 != 0);
        do {
          if (iVar6 == 0x12) {
            *(undefined8 *)(lVar4 + 0x60) = *(undefined8 *)(piVar8 + 2);
            break;
          }
          piVar7 = piVar8 + 4;
          piVar8 = piVar8 + 4;
          iVar6 = *piVar7;
        } while (*piVar7 != 0);
        do {
          if (iVar2 == 0x13) {
            *(undefined8 *)(lVar4 + 0x68) = *(undefined8 *)(param_3 + 2);
            break;
          }
          iVar2 = param_3[4];
          param_3 = param_3 + 4;
        } while (iVar2 != 0);
      }
      *(undefined8 *)(lVar4 + 0x98) = 0x7fffffff;
      *(undefined8 *)(lVar4 + 0xa8) = 0x7fffffff;
      *(undefined8 *)(lVar4 + 0xb0) = 0x7fffffff;
      *(undefined8 *)(lVar4 + 0xb8) = 0x7fffffff;
      *(undefined4 *)(lVar4 + 0xc0) = 1;
      LOCK();
      *(undefined4 *)(lVar4 + 0xd8) = 1;
      UNLOCK();
      *(undefined4 *)(lVar4 + 0xc4) = 0x100;
      *(undefined8 *)(lVar4 + 0xd0) = 0xe10;
      iVar2 = (*param_4)(lVar4);
      if (iVar2 != 0) {
        if (param_2 == 0) goto LAB_005b387b;
        iVar2 = FUN_005b2220(lVar4,&local_44);
        if (iVar2 != 0) {
          if (*(uint *)(lVar4 + 0x80) <= local_44) goto LAB_005b387b;
          FUN_0051f420();
          FUN_0051f540("../providers/implementations/rands/drbg.c",0x344,"ossl_rand_drbg_new");
          FUN_0051f8f0(0x39,0xc2,0);
        }
      }
      FUN_005b3600(lVar4);
      lVar4 = 0;
    }
  }
LAB_005b387b:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return lVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

