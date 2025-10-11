
/* WARNING: Type propagation algorithm not settling */

int * FUN_00538ad0(int param_1,long param_2,long param_3)

{
  int iVar1;
  int *piVar2;
  long lVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  
  piVar5 = *(int **)(param_2 + 0x10);
  piVar2 = (int *)FUN_005378e0();
  if (piVar2 == (int *)0x0) {
    FUN_0051f420();
    FUN_0051f540("../crypto/evp/evp_enc.c",0x5e5,"evp_cipher_from_algorithm");
    FUN_0051f8f0(6,0xc0100,0);
  }
  else {
    *piVar2 = 0;
    iVar1 = FUN_00409210(param_3,param_1,FUN_00535850);
    if ((iVar1 == 0) || (*piVar2 == -1)) {
      FUN_0051f420();
      FUN_0051f540("../crypto/evp/evp_enc.c",0x5ed,"evp_cipher_from_algorithm");
      FUN_0051f8f0(6,0xc0103,0);
      FUN_00537a40(piVar2);
      return (int *)0x0;
    }
    piVar2[0x18] = param_1;
    lVar3 = FUN_00417d20(param_2);
    *(long *)(piVar2 + 0x1a) = lVar3;
    if (lVar3 != 0) {
      *(undefined8 *)(piVar2 + 0x1c) = *(undefined8 *)(param_2 + 0x18);
      iVar1 = *piVar5;
      if (iVar1 != 0) {
        iVar6 = 0;
        iVar4 = 0;
        do {
          switch(iVar1) {
          case 1:
            if (*(long *)(piVar2 + 0x24) != 0) break;
            iVar6 = iVar6 + 1;
            *(undefined8 *)(piVar2 + 0x24) = *(undefined8 *)(piVar5 + 2);
            iVar1 = piVar5[4];
            goto joined_r0x00538d66;
          case 2:
            if (*(long *)(piVar2 + 0x26) == 0) {
              *(undefined8 *)(piVar2 + 0x26) = *(undefined8 *)(piVar5 + 2);
              iVar1 = piVar5[4];
joined_r0x00538e46:
              iVar4 = iVar4 + 1;
              goto joined_r0x00538d66;
            }
            break;
          case 3:
            if (*(long *)(piVar2 + 0x28) == 0) {
              *(undefined8 *)(piVar2 + 0x28) = *(undefined8 *)(piVar5 + 2);
              iVar1 = piVar5[4];
              goto joined_r0x00538e46;
            }
            break;
          case 4:
            if (*(long *)(piVar2 + 0x2a) == 0) {
              *(undefined8 *)(piVar2 + 0x2a) = *(undefined8 *)(piVar5 + 2);
              iVar1 = piVar5[4];
joined_r0x00538dd6:
              iVar4 = iVar4 + 1;
              goto joined_r0x00538d66;
            }
            break;
          case 5:
            if (*(long *)(piVar2 + 0x2c) == 0) {
              *(undefined8 *)(piVar2 + 0x2c) = *(undefined8 *)(piVar5 + 2);
              iVar1 = piVar5[4];
              goto joined_r0x00538dd6;
            }
            break;
          case 6:
            if (*(long *)(piVar2 + 0x2e) == 0) {
              *(undefined8 *)(piVar2 + 0x2e) = *(undefined8 *)(piVar5 + 2);
              iVar1 = piVar5[4];
              goto joined_r0x00538d66;
            }
            break;
          case 7:
            if (*(long *)(piVar2 + 0x30) == 0) {
              iVar6 = iVar6 + 1;
              *(undefined8 *)(piVar2 + 0x30) = *(undefined8 *)(piVar5 + 2);
              iVar1 = piVar5[4];
              goto joined_r0x00538d66;
            }
            break;
          case 8:
            if (*(long *)(piVar2 + 0x32) == 0) {
              *(undefined8 *)(piVar2 + 0x32) = *(undefined8 *)(piVar5 + 2);
              iVar1 = piVar5[4];
              goto joined_r0x00538d66;
            }
            break;
          case 9:
            if (*(long *)(piVar2 + 0x34) == 0) {
              *(undefined8 *)(piVar2 + 0x34) = *(undefined8 *)(piVar5 + 2);
              iVar1 = piVar5[4];
              goto joined_r0x00538d66;
            }
            break;
          case 10:
            if (*(long *)(piVar2 + 0x36) == 0) {
              *(undefined8 *)(piVar2 + 0x36) = *(undefined8 *)(piVar5 + 2);
              iVar1 = piVar5[4];
              goto joined_r0x00538d66;
            }
            break;
          case 0xb:
            if (*(long *)(piVar2 + 0x38) == 0) {
              *(undefined8 *)(piVar2 + 0x38) = *(undefined8 *)(piVar5 + 2);
              iVar1 = piVar5[4];
              goto joined_r0x00538d66;
            }
            break;
          case 0xc:
            if (*(long *)(piVar2 + 0x3a) == 0) {
              *(undefined8 *)(piVar2 + 0x3a) = *(undefined8 *)(piVar5 + 2);
              iVar1 = piVar5[4];
              goto joined_r0x00538d66;
            }
            break;
          case 0xd:
            if (*(long *)(piVar2 + 0x3c) == 0) {
              *(undefined8 *)(piVar2 + 0x3c) = *(undefined8 *)(piVar5 + 2);
              iVar1 = piVar5[4];
              goto joined_r0x00538d66;
            }
            break;
          case 0xe:
            if (*(long *)(piVar2 + 0x3e) == 0) {
              *(undefined8 *)(piVar2 + 0x3e) = *(undefined8 *)(piVar5 + 2);
              iVar1 = piVar5[4];
              goto joined_r0x00538d66;
            }
          }
          iVar1 = piVar5[4];
joined_r0x00538d66:
          piVar5 = piVar5 + 4;
        } while (iVar1 != 0);
        if (iVar4 == 0) {
          if (*(long *)(piVar2 + 0x2e) == 0) goto LAB_00538ea7;
        }
        else if ((iVar4 != 3) && (iVar4 != 4)) goto LAB_00538ea7;
        if (iVar6 == 2) {
          *(long *)(piVar2 + 0x1e) = param_3;
          if (param_3 != 0) {
            FUN_00420ec0(param_3);
          }
          iVar1 = FUN_00409330(piVar2);
          if (iVar1 != 0) {
            return piVar2;
          }
          FUN_00537a40(piVar2);
          FUN_0051f420();
          FUN_0051f540("../crypto/evp/evp_enc.c",0x65f,"evp_cipher_from_algorithm");
          FUN_0051f8f0(6,0xe1,0);
          return (int *)0x0;
        }
      }
LAB_00538ea7:
      FUN_00537a40(piVar2);
      FUN_0051f420();
      FUN_0051f540("../crypto/evp/evp_enc.c",0x656,"evp_cipher_from_algorithm");
      FUN_0051f8f0(6,0xc1,0);
      return (int *)0x0;
    }
    FUN_00537a40(piVar2);
  }
  return (int *)0x0;
}

