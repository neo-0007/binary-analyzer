
long FUN_00436c40(undefined8 *param_1,undefined8 param_2,long param_3)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  int *piVar6;
  
  uVar3 = FUN_00420cf0(param_2);
  uVar3 = FUN_00418710(uVar3);
  iVar2 = FUN_00418a20(uVar3,0,*param_1);
  if (iVar2 != 0) {
    piVar6 = (int *)param_1[2];
    lVar4 = FUN_0041aec0(0xd0,"../crypto/store/store_meth.c",0x31);
    if (lVar4 != 0) {
      lVar5 = FUN_00422240();
      *(long *)(lVar4 + 0x88) = lVar5;
      if (lVar5 != 0) {
        *(undefined8 *)(lVar4 + 0x60) = param_2;
        FUN_00420ec0(param_2);
        LOCK();
        *(undefined4 *)(lVar4 + 0x80) = 1;
        UNLOCK();
        lVar5 = *(long *)(lVar4 + 0x90);
        *(undefined8 *)(lVar4 + 0x70) = param_1[1];
        uVar3 = param_1[3];
        *(int *)(lVar4 + 0x68) = iVar2;
        *(undefined8 *)(lVar4 + 0x78) = uVar3;
        iVar2 = *piVar6;
        while (iVar2 != 0) {
                    /* WARNING: Could not find normalized switch variable to match jumptable */
          switch(iVar2) {
          case 1:
            if (lVar5 == 0) {
              lVar5 = *(long *)(piVar6 + 2);
              *(long *)(lVar4 + 0x90) = lVar5;
            }
            break;
          case 2:
            if (*(long *)(lVar4 + 0x98) == 0) {
              *(undefined8 *)(lVar4 + 0x98) = *(undefined8 *)(piVar6 + 2);
            }
            break;
          case 3:
            if (*(long *)(lVar4 + 0xa0) == 0) {
              *(undefined8 *)(lVar4 + 0xa0) = *(undefined8 *)(piVar6 + 2);
            }
            break;
          case 4:
            if (*(long *)(lVar4 + 0xa8) == 0) {
              *(undefined8 *)(lVar4 + 0xa8) = *(undefined8 *)(piVar6 + 2);
            }
            break;
          case 5:
            if (*(long *)(lVar4 + 0xb0) == 0) {
              *(undefined8 *)(lVar4 + 0xb0) = *(undefined8 *)(piVar6 + 2);
            }
            break;
          case 6:
            if (*(long *)(lVar4 + 0xb8) == 0) {
              *(undefined8 *)(lVar4 + 0xb8) = *(undefined8 *)(piVar6 + 2);
            }
            break;
          case 7:
            if (*(long *)(lVar4 + 0xc0) == 0) {
              *(undefined8 *)(lVar4 + 0xc0) = *(undefined8 *)(piVar6 + 2);
            }
            break;
          case 8:
            if (*(long *)(lVar4 + 200) == 0) {
              *(undefined8 *)(lVar4 + 200) = *(undefined8 *)(piVar6 + 2);
            }
          }
          piVar1 = piVar6 + 4;
          piVar6 = piVar6 + 4;
                    /* WARNING: This code block may not be properly labeled as switch case */
          iVar2 = *piVar1;
        }
        if ((((lVar5 != 0) || (*(long *)(lVar4 + 0x98) != 0)) && (*(long *)(lVar4 + 0xb0) != 0)) &&
           ((*(long *)(lVar4 + 0xb8) != 0 && (*(long *)(lVar4 + 0xc0) != 0)))) {
          return lVar4;
        }
        FUN_00436bc0(lVar4);
        FUN_0051f420();
        FUN_0051f540("../crypto/store/store_meth.c",0xe5,"loader_from_algorithm");
        FUN_0051f8f0(0x2c,0x74,0);
        goto LAB_00436db0;
      }
    }
    FUN_0041ad60(lVar4,"../crypto/store/store_meth.c",0x33);
  }
LAB_00436db0:
  *(byte *)(param_3 + 0x28) = *(byte *)(param_3 + 0x28) | 1;
  return 0;
}

