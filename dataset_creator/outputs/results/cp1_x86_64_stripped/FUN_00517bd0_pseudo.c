
long * FUN_00517bd0(undefined8 *param_1,long param_2,long param_3)

{
  int *piVar1;
  undefined8 uVar2;
  int iVar3;
  undefined8 uVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  int *piVar9;
  
  uVar4 = FUN_00420cf0(param_2);
  uVar4 = FUN_00418710(uVar4);
  iVar3 = FUN_00418460(uVar4,0,*param_1,0x3a);
  if (iVar3 == 0) goto LAB_00517d00;
  piVar9 = (int *)param_1[2];
  uVar4 = FUN_00420cf0(param_2);
  plVar5 = (long *)FUN_0041aec0(0x88,"../crypto/encode_decode/encoder_meth.c",0x1f);
  if (plVar5 != (long *)0x0) {
    lVar6 = FUN_00422240();
    plVar5[6] = lVar6;
    if (lVar6 != 0) {
      LOCK();
      *(undefined4 *)(plVar5 + 5) = 1;
      UNLOCK();
      *(int *)(plVar5 + 1) = iVar3;
      lVar6 = FUN_00417d20(param_1);
      plVar5[2] = lVar6;
      if (lVar6 == 0) {
LAB_00517f10:
        FUN_00517b20(plVar5);
      }
      else {
        uVar2 = param_1[1];
        plVar5[3] = (long)param_1;
        lVar7 = FUN_00426d10(uVar4,uVar2);
        lVar8 = plVar5[7];
        lVar6 = plVar5[8];
        plVar5[4] = lVar7;
        iVar3 = *piVar9;
        while (iVar3 != 0) {
                    /* WARNING: Could not find normalized switch variable to match jumptable */
          switch(iVar3) {
          case 1:
            if (lVar8 == 0) {
              lVar8 = *(long *)(piVar9 + 2);
              plVar5[7] = lVar8;
            }
            break;
          case 2:
            if (lVar6 == 0) {
              lVar6 = *(long *)(piVar9 + 2);
              plVar5[8] = lVar6;
            }
            break;
          case 3:
            if (plVar5[9] == 0) {
              plVar5[9] = *(long *)(piVar9 + 2);
            }
            break;
          case 4:
            if (plVar5[10] == 0) {
              plVar5[10] = *(long *)(piVar9 + 2);
            }
            break;
          case 5:
            if (plVar5[0xb] == 0) {
              plVar5[0xb] = *(long *)(piVar9 + 2);
            }
            break;
          case 6:
            if (plVar5[0xc] == 0) {
              plVar5[0xc] = *(long *)(piVar9 + 2);
            }
            break;
          case 10:
            if (plVar5[0xd] == 0) {
              plVar5[0xd] = *(long *)(piVar9 + 2);
            }
            break;
          case 0xb:
            if (plVar5[0xe] == 0) {
              plVar5[0xe] = *(long *)(piVar9 + 2);
            }
            break;
          case 0x14:
            if (plVar5[0xf] == 0) {
              plVar5[0xf] = *(long *)(piVar9 + 2);
            }
            break;
          case 0x15:
            if (plVar5[0x10] == 0) {
              plVar5[0x10] = *(long *)(piVar9 + 2);
            }
          }
          piVar1 = piVar9 + 4;
          piVar9 = piVar9 + 4;
                    /* WARNING: This code block may not be properly labeled as switch case */
          iVar3 = *piVar1;
        }
        if (lVar8 == 0) {
          if (lVar6 != 0) goto LAB_00517eb9;
LAB_00517d52:
          if (plVar5[0xe] != 0) {
            if ((param_2 == 0) || (iVar3 = FUN_00420ec0(param_2), iVar3 != 0)) {
              *plVar5 = param_2;
              return plVar5;
            }
            goto LAB_00517f10;
          }
        }
        else {
          if (lVar6 != 0) goto LAB_00517d52;
LAB_00517eb9:
          if (plVar5[0xf] == 0) {
            if (plVar5[0x10] == 0) goto LAB_00517d52;
          }
          else if (plVar5[0x10] != 0) goto LAB_00517d52;
        }
        FUN_00517b20(plVar5);
        FUN_0051f420();
        FUN_0051f540("../crypto/encode_decode/encoder_meth.c",0x118,"encoder_from_algorithm");
        FUN_0051f8f0(0x3b,0xc0108,0);
      }
      goto LAB_00517d00;
    }
  }
  FUN_00517b20(plVar5);
  FUN_0051f420();
  FUN_0051f540("../crypto/encode_decode/encoder_meth.c",0x22,"ossl_encoder_new");
  FUN_0051f8f0(0x3b,0xc0100,0);
LAB_00517d00:
  *(byte *)(param_3 + 0x28) = *(byte *)(param_3 + 0x28) | 1;
  return (long *)0x0;
}

