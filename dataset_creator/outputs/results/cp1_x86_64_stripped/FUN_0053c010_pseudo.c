
long * FUN_0053c010(undefined4 param_1,long param_2,long param_3)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  
  piVar5 = *(int **)(param_2 + 0x10);
  plVar2 = (long *)FUN_0041aec0(0x88,"../crypto/evp/kdf_meth.c",0x32);
  if (plVar2 != (long *)0x0) {
    lVar3 = FUN_00422240();
    plVar2[5] = lVar3;
    if (lVar3 != 0) {
      LOCK();
      *(undefined4 *)(plVar2 + 4) = 1;
      UNLOCK();
      *(undefined4 *)(plVar2 + 1) = param_1;
      lVar3 = FUN_00417d20(param_2);
      plVar2[2] = lVar3;
      if (lVar3 == 0) {
        FUN_0053bf90(plVar2);
        return (long *)0x0;
      }
      iVar4 = 0;
      iVar6 = 0;
      plVar2[3] = *(long *)(param_2 + 0x18);
      iVar1 = *piVar5;
      if (iVar1 != 0) {
        do {
          switch(iVar1) {
          case 1:
            if (plVar2[6] != 0) break;
            iVar4 = iVar4 + 1;
            plVar2[6] = *(long *)(piVar5 + 2);
            iVar1 = piVar5[4];
            goto joined_r0x0053c22b;
          case 2:
            if (plVar2[7] == 0) {
              plVar2[7] = *(long *)(piVar5 + 2);
              iVar1 = piVar5[4];
              goto joined_r0x0053c22b;
            }
            break;
          case 3:
            if (plVar2[8] == 0) {
              iVar4 = iVar4 + 1;
              plVar2[8] = *(long *)(piVar5 + 2);
              iVar1 = piVar5[4];
              goto joined_r0x0053c22b;
            }
            break;
          case 4:
            if (plVar2[9] == 0) {
              plVar2[9] = *(long *)(piVar5 + 2);
              iVar1 = piVar5[4];
              goto joined_r0x0053c22b;
            }
            break;
          case 5:
            if (plVar2[10] == 0) {
              iVar6 = iVar6 + 1;
              plVar2[10] = *(long *)(piVar5 + 2);
              iVar1 = piVar5[4];
              goto joined_r0x0053c22b;
            }
            break;
          case 6:
            if (plVar2[0xb] == 0) {
              plVar2[0xb] = *(long *)(piVar5 + 2);
              iVar1 = piVar5[4];
              goto joined_r0x0053c22b;
            }
            break;
          case 7:
            if (plVar2[0xc] == 0) {
              plVar2[0xc] = *(long *)(piVar5 + 2);
              iVar1 = piVar5[4];
              goto joined_r0x0053c22b;
            }
            break;
          case 8:
            if (plVar2[0xd] == 0) {
              plVar2[0xd] = *(long *)(piVar5 + 2);
              iVar1 = piVar5[4];
              goto joined_r0x0053c22b;
            }
            break;
          case 9:
            if (plVar2[0xe] == 0) {
              plVar2[0xe] = *(long *)(piVar5 + 2);
              iVar1 = piVar5[4];
              goto joined_r0x0053c22b;
            }
            break;
          case 10:
            if (plVar2[0xf] == 0) {
              plVar2[0xf] = *(long *)(piVar5 + 2);
              iVar1 = piVar5[4];
              goto joined_r0x0053c22b;
            }
            break;
          case 0xb:
            if (plVar2[0x10] == 0) {
              plVar2[0x10] = *(long *)(piVar5 + 2);
              iVar1 = piVar5[4];
              goto joined_r0x0053c22b;
            }
          }
          iVar1 = piVar5[4];
joined_r0x0053c22b:
          piVar5 = piVar5 + 4;
        } while (iVar1 != 0);
        if ((iVar6 == 1) && (iVar4 == 2)) {
          *plVar2 = param_3;
          if (param_3 == 0) {
            return plVar2;
          }
          FUN_00420ec0(param_3);
          return plVar2;
        }
      }
      FUN_0053bf90(plVar2);
      FUN_0051f420();
      FUN_0051f540("../crypto/evp/kdf_meth.c",0x96,"evp_kdf_from_algorithm");
      FUN_0051f8f0(6,0xc1,0);
      return (long *)0x0;
    }
  }
  FUN_0041ad60(plVar2,"../crypto/evp/kdf_meth.c",0x34);
  FUN_0051f420();
  FUN_0051f540("../crypto/evp/kdf_meth.c",0x44,"evp_kdf_from_algorithm");
  FUN_0051f8f0(6,0xc0100,0);
  return (long *)0x0;
}

