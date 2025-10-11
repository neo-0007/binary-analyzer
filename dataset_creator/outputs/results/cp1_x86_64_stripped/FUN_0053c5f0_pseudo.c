
undefined4 * FUN_0053c5f0(undefined4 param_1,long param_2,undefined8 param_3)

{
  int iVar1;
  undefined4 *puVar2;
  long lVar3;
  uint uVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  
  piVar5 = *(int **)(param_2 + 0x10);
  puVar2 = (undefined4 *)FUN_0041aec0(0x88,"../crypto/evp/kem.c",0xef);
  if (puVar2 == (undefined4 *)0x0) {
    FUN_0051f420();
    FUN_0051f540("../crypto/evp/kem.c",0xf2,"evp_kem_new");
    FUN_0051f8f0(6,0xc0100,0);
  }
  else {
    lVar3 = FUN_00422240();
    *(long *)(puVar2 + 10) = lVar3;
    if (lVar3 != 0) {
      *(undefined8 *)(puVar2 + 6) = param_3;
      FUN_00420ec0(param_3);
      LOCK();
      puVar2[8] = 1;
      UNLOCK();
      *puVar2 = param_1;
      lVar3 = FUN_00417d20();
      *(long *)(puVar2 + 2) = lVar3;
      if (lVar3 != 0) {
        *(undefined8 *)(puVar2 + 4) = *(undefined8 *)(param_2 + 0x18);
        iVar1 = *piVar5;
        if (iVar1 != 0) {
          uVar8 = 0;
          uVar9 = 0;
          iVar6 = 0;
          uVar4 = 0;
          iVar7 = 0;
          do {
            switch(iVar1) {
            case 1:
              if (*(long *)(puVar2 + 0xc) != 0) break;
              iVar7 = iVar7 + 1;
              *(undefined8 *)(puVar2 + 0xc) = *(undefined8 *)(piVar5 + 2);
              iVar1 = piVar5[4];
              goto joined_r0x0053c880;
            case 2:
              if (*(long *)(puVar2 + 0xe) == 0) {
                uVar4 = uVar4 + 1;
                *(undefined8 *)(puVar2 + 0xe) = *(undefined8 *)(piVar5 + 2);
                iVar1 = piVar5[4];
                goto joined_r0x0053c880;
              }
              break;
            case 3:
              if (*(long *)(puVar2 + 0x10) == 0) {
                uVar4 = uVar4 + 1;
                *(undefined8 *)(puVar2 + 0x10) = *(undefined8 *)(piVar5 + 2);
                iVar1 = piVar5[4];
                goto joined_r0x0053c880;
              }
              break;
            case 4:
              if (*(long *)(puVar2 + 0x12) == 0) {
                iVar6 = iVar6 + 1;
                *(undefined8 *)(puVar2 + 0x12) = *(undefined8 *)(piVar5 + 2);
                iVar1 = piVar5[4];
                goto joined_r0x0053c880;
              }
              break;
            case 5:
              if (*(long *)(puVar2 + 0x14) == 0) {
                iVar6 = iVar6 + 1;
                *(undefined8 *)(puVar2 + 0x14) = *(undefined8 *)(piVar5 + 2);
                iVar1 = piVar5[4];
                goto joined_r0x0053c880;
              }
              break;
            case 6:
              if (*(long *)(puVar2 + 0x16) == 0) {
                iVar7 = iVar7 + 1;
                *(undefined8 *)(puVar2 + 0x16) = *(undefined8 *)(piVar5 + 2);
                iVar1 = piVar5[4];
                goto joined_r0x0053c880;
              }
              break;
            case 7:
              if (*(long *)(puVar2 + 0x18) == 0) {
                *(undefined8 *)(puVar2 + 0x18) = *(undefined8 *)(piVar5 + 2);
                iVar1 = piVar5[4];
                goto joined_r0x0053c880;
              }
              break;
            case 8:
              if (*(long *)(puVar2 + 0x1a) == 0) {
                uVar9 = uVar9 + 1;
                *(undefined8 *)(puVar2 + 0x1a) = *(undefined8 *)(piVar5 + 2);
                iVar1 = piVar5[4];
                goto joined_r0x0053c880;
              }
              break;
            case 9:
              if (*(long *)(puVar2 + 0x1c) == 0) {
                uVar9 = uVar9 + 1;
                *(undefined8 *)(puVar2 + 0x1c) = *(undefined8 *)(piVar5 + 2);
                iVar1 = piVar5[4];
                goto joined_r0x0053c880;
              }
              break;
            case 10:
              if (*(long *)(puVar2 + 0x1e) == 0) {
                uVar8 = uVar8 + 1;
                *(undefined8 *)(puVar2 + 0x1e) = *(undefined8 *)(piVar5 + 2);
                iVar1 = piVar5[4];
                goto joined_r0x0053c880;
              }
              break;
            case 0xb:
              if (*(long *)(puVar2 + 0x20) == 0) {
                uVar8 = uVar8 + 1;
                *(undefined8 *)(puVar2 + 0x20) = *(undefined8 *)(piVar5 + 2);
                iVar1 = piVar5[4];
                goto joined_r0x0053c880;
              }
            }
            iVar1 = piVar5[4];
joined_r0x0053c880:
            piVar5 = piVar5 + 4;
          } while (iVar1 != 0);
          if ((iVar7 == 2) &&
             (((uVar4 == 2 && iVar6 == 0 || (iVar6 == 2)) &&
              (((uVar4 | uVar9 | uVar8) & 0xfffffffd) == 0)))) {
            return puVar2;
          }
        }
        FUN_0051f420();
        FUN_0051f540("../crypto/evp/kem.c",0x16d,"evp_kem_from_algorithm");
        FUN_0051f8f0(6,0xc1,0);
      }
      goto LAB_0053c71c;
    }
    FUN_0051f420();
    FUN_0051f540("../crypto/evp/kem.c",0xf8,"evp_kem_new");
    FUN_0051f8f0(6,0xc0100,0);
    FUN_0041ad60(puVar2,"../crypto/evp/kem.c",0xf9);
  }
  FUN_0051f420();
  puVar2 = (undefined4 *)0x0;
  FUN_0051f540("../crypto/evp/kem.c",0x10c,"evp_kem_from_algorithm");
  FUN_0051f8f0(6,0xc0100,0);
LAB_0053c71c:
  FUN_0053c570(puVar2);
  return (undefined4 *)0x0;
}

