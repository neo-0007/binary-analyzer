
uint FUN_005bc920(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,int param_5)

{
  char cVar1;
  undefined8 uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  char *pcVar10;
  
  uVar4 = 1;
  if (param_3 != 0) {
    pcVar10 = "-";
    iVar3 = FUN_004b7d60(param_3);
    if (iVar3 == 0) {
      pcVar10 = "";
    }
    uVar4 = FUN_004abce0(param_1,param_5,0x80);
    if (uVar4 != 0) {
      iVar3 = FUN_004b7ba0(param_3);
      if (iVar3 == 0) {
        iVar3 = FUN_004b7bb0(param_3);
        if (iVar3 < 0x41) {
          puVar6 = (undefined8 *)FUN_004b7440();
          uVar2 = *puVar6;
          puVar6 = (undefined8 *)FUN_004b7440(param_3);
          iVar3 = FUN_004ae9e0(param_1,"%s %s%lu (%s0x%lx)\n",param_2,pcVar10,*puVar6,pcVar10,uVar2)
          ;
          uVar4 = (uint)(0 < iVar3);
        }
        else {
          iVar5 = FUN_004b7bb0(param_3);
          iVar3 = iVar5 + 0xe;
          if (-1 < iVar5 + 7) {
            iVar3 = iVar5 + 7;
          }
          lVar7 = (long)((iVar3 >> 3) + 1);
          puVar8 = (undefined1 *)FUN_0041ad90(lVar7,"../crypto/asn1/t_pkey.c",0x49);
          uVar4 = 0;
          if (puVar8 != (undefined1 *)0x0) {
            cVar1 = *pcVar10;
            *puVar8 = 0;
            pcVar10 = " (Negative)";
            if (cVar1 != '-') {
              pcVar10 = "";
            }
            iVar3 = FUN_004ae9e0(param_1,"%s%s\n",param_2,pcVar10);
            if (0 < iVar3) {
              iVar3 = FUN_004b87d0(param_3,puVar8 + 1);
              puVar9 = puVar8 + 1;
              if ((char)puVar8[1] < '\0') {
                iVar3 = iVar3 + 1;
                puVar9 = puVar8;
              }
              iVar3 = FUN_005bc820(param_1,puVar9,(long)iVar3,param_5 + 4);
              uVar4 = (uint)(iVar3 != 0);
            }
          }
          FUN_0041aef0(puVar8,lVar7,"../crypto/asn1/t_pkey.c",0x5b);
        }
      }
      else {
        iVar3 = FUN_004ae9e0(param_1,"%s 0\n",param_2);
        uVar4 = (uint)(0 < iVar3);
      }
    }
  }
  return uVar4;
}

