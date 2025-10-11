
/* WARNING: Type propagation algorithm not settling */

long * FUN_00539a20(undefined4 param_1,long param_2,long param_3)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int *piVar8;
  
  piVar8 = *(int **)(param_2 + 0x10);
  plVar2 = (long *)FUN_0041aec0(0xc0,"../crypto/evp/evp_rand.c",0x50);
  if (plVar2 != (long *)0x0) {
    lVar3 = FUN_00422240();
    plVar2[5] = lVar3;
    if (lVar3 != 0) {
      LOCK();
      *(undefined4 *)(plVar2 + 4) = 1;
      UNLOCK();
      *(undefined4 *)(plVar2 + 1) = param_1;
      lVar3 = FUN_00417d20();
      plVar2[2] = lVar3;
      if (lVar3 == 0) {
        FUN_005399a0(plVar2);
        return (long *)0x0;
      }
      lVar3 = *(long *)(param_2 + 0x18);
      plVar2[6] = (long)piVar8;
      plVar2[3] = lVar3;
      iVar1 = *piVar8;
      if (iVar1 != 0) {
        iVar7 = 0;
        uVar6 = 0;
        iVar4 = 0;
        iVar5 = 0;
        do {
          switch(iVar1) {
          case 1:
            if (plVar2[7] != 0) break;
            plVar2[7] = *(long *)(piVar8 + 2);
            iVar1 = piVar8[4];
joined_r0x00539e49:
            iVar4 = iVar4 + 1;
            goto joined_r0x00539e49;
          case 2:
            if (plVar2[8] == 0) {
              plVar2[8] = *(long *)(piVar8 + 2);
              iVar1 = piVar8[4];
              goto joined_r0x00539e49;
            }
            break;
          case 3:
            if (plVar2[9] == 0) {
              plVar2[9] = *(long *)(piVar8 + 2);
              iVar1 = piVar8[4];
joined_r0x00539de9:
              iVar5 = iVar5 + 1;
              goto joined_r0x00539e49;
            }
            break;
          case 4:
            if (plVar2[10] == 0) {
              plVar2[10] = *(long *)(piVar8 + 2);
              iVar1 = piVar8[4];
              goto joined_r0x00539de9;
            }
            break;
          case 5:
            if (plVar2[0xb] == 0) {
              iVar5 = iVar5 + 1;
              plVar2[0xb] = *(long *)(piVar8 + 2);
              iVar1 = piVar8[4];
              goto joined_r0x00539e49;
            }
            break;
          case 6:
            if (plVar2[0xc] == 0) {
              plVar2[0xc] = *(long *)(piVar8 + 2);
              iVar1 = piVar8[4];
              goto joined_r0x00539e49;
            }
            break;
          case 7:
            if (plVar2[0xd] == 0) {
              plVar2[0xd] = *(long *)(piVar8 + 2);
              iVar1 = piVar8[4];
              goto joined_r0x00539e49;
            }
            break;
          case 8:
            if (plVar2[0xe] == 0) {
              iVar7 = iVar7 + 1;
              plVar2[0xe] = *(long *)(piVar8 + 2);
              iVar1 = piVar8[4];
              goto joined_r0x00539e49;
            }
            break;
          case 9:
            if (plVar2[0xf] == 0) {
              plVar2[0xf] = *(long *)(piVar8 + 2);
              iVar1 = piVar8[4];
joined_r0x00539cc7:
              uVar6 = uVar6 + 1;
              goto joined_r0x00539e49;
            }
            break;
          case 10:
            if (plVar2[0x10] == 0) {
              plVar2[0x10] = *(long *)(piVar8 + 2);
              iVar1 = piVar8[4];
              goto joined_r0x00539cc7;
            }
            break;
          case 0xb:
            if (plVar2[0x11] == 0) {
              plVar2[0x11] = *(long *)(piVar8 + 2);
              iVar1 = piVar8[4];
              goto joined_r0x00539e49;
            }
            break;
          case 0xc:
            if (plVar2[0x12] == 0) {
              plVar2[0x12] = *(long *)(piVar8 + 2);
              iVar1 = piVar8[4];
              goto joined_r0x00539e49;
            }
            break;
          case 0xd:
            if (plVar2[0x13] == 0) {
              plVar2[0x13] = *(long *)(piVar8 + 2);
              iVar1 = piVar8[4];
              goto joined_r0x00539e49;
            }
            break;
          case 0xe:
            if (plVar2[0x14] == 0) {
              plVar2[0x14] = *(long *)(piVar8 + 2);
              iVar1 = piVar8[4];
              goto joined_r0x00539e49;
            }
            break;
          case 0xf:
            if (plVar2[0x15] == 0) {
              iVar4 = iVar4 + 1;
              plVar2[0x15] = *(long *)(piVar8 + 2);
              iVar1 = piVar8[4];
              goto joined_r0x00539e49;
            }
            break;
          case 0x10:
            if (plVar2[0x16] == 0) {
              plVar2[0x16] = *(long *)(piVar8 + 2);
              iVar1 = piVar8[4];
              goto joined_r0x00539e49;
            }
            break;
          case 0x11:
            if (plVar2[0x17] == 0) {
              plVar2[0x17] = *(long *)(piVar8 + 2);
              iVar1 = piVar8[4];
              goto joined_r0x00539e49;
            }
          }
          iVar1 = piVar8[4];
joined_r0x00539e49:
          piVar8 = piVar8 + 4;
        } while (iVar1 != 0);
        if (((iVar5 == 3 && iVar4 == 3) && (iVar7 < 2)) && ((uVar6 & 0xfffffffd) == 0)) {
          if ((param_3 != 0) && (iVar1 = FUN_00420ec0(param_3), iVar1 == 0)) {
            FUN_005399a0(plVar2);
            FUN_0051f420();
            FUN_0051f540("../crypto/evp/evp_rand.c",0x109,"evp_rand_from_algorithm");
            FUN_0051f8f0(6,0xc0103,0);
            return (long *)0x0;
          }
          *plVar2 = param_3;
          return plVar2;
        }
      }
      FUN_005399a0(plVar2);
      FUN_0051f420();
      FUN_0051f540("../crypto/evp/evp_rand.c",0x103,"evp_rand_from_algorithm");
      FUN_0051f8f0(6,0xc1,0);
      return (long *)0x0;
    }
  }
  FUN_0041ad60(plVar2,"../crypto/evp/evp_rand.c",0x54);
  FUN_0051f420();
  FUN_0051f540("../crypto/evp/evp_rand.c",0x7f,"evp_rand_from_algorithm");
  FUN_0051f8f0(6,0xc0100,0);
  return (long *)0x0;
}

