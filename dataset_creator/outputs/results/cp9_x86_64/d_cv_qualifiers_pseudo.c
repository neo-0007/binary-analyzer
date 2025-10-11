
long * d_cv_qualifiers(long param_1,long *param_2,uint param_3)

{
  long *plVar1;
  byte bVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  long lVar6;
  byte *pbVar7;
  char cVar8;
  ulong uVar9;
  
  pbVar7 = *(byte **)(param_1 + 0x18);
  uVar9 = (ulong)*pbVar7;
  iVar5 = next_is_type_qual_isra_0(pbVar7);
  cVar8 = (char)uVar9;
  plVar1 = param_2;
  do {
    if (iVar5 == 0) {
      if (((param_3 & 1) == 0) && (cVar8 == 'F')) {
        while (plVar1 != param_2) {
          piVar4 = (int *)*param_2;
          iVar5 = *piVar4;
          if (iVar5 == 0x1a) {
            *piVar4 = 0x1d;
          }
          else if (iVar5 == 0x1b) {
            *piVar4 = 0x1e;
          }
          else if (iVar5 == 0x19) {
            *piVar4 = 0x1c;
          }
          param_2 = (long *)(piVar4 + 4);
        }
      }
      return plVar1;
    }
    *(byte **)(param_1 + 0x18) = pbVar7 + 1;
    cVar8 = (char)uVar9;
    if (cVar8 == 'r') {
      *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + 9;
      lVar6 = 0;
      iVar5 = (-(uint)(param_3 == 0) & 0xfffffffd) + 0x1c;
    }
    else if (cVar8 == 'V') {
      *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + 9;
      lVar6 = 0;
      iVar5 = (-(uint)(param_3 == 0) & 0xfffffffd) + 0x1d;
    }
    else if (cVar8 == 'K') {
      *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + 6;
      lVar6 = 0;
      iVar5 = (-(uint)(param_3 == 0) & 0xfffffffd) + 0x1e;
    }
    else {
      if (pbVar7[1] == 0) {
        return (long *)0x0;
      }
      *(byte **)(param_1 + 0x18) = pbVar7 + 2;
      bVar2 = pbVar7[1];
      if (bVar2 == 0x78) {
        *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + 0x11;
        lVar6 = 0;
        iVar5 = 0x4e;
      }
      else if ((bVar2 & 0xdf) == 0x4f) {
        *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + 9;
        if (bVar2 == 0x4f) {
          uVar3 = *(undefined4 *)(param_1 + 0x4c);
          *(undefined4 *)(param_1 + 0x4c) = 1;
          lVar6 = d_expression_1(param_1);
          *(undefined4 *)(param_1 + 0x4c) = uVar3;
          if (lVar6 == 0) {
            return (long *)0x0;
          }
          if (**(char **)(param_1 + 0x18) != 'E') {
            return (long *)0x0;
          }
          *(char **)(param_1 + 0x18) = *(char **)(param_1 + 0x18) + 1;
          iVar5 = 0x50;
        }
        else {
          lVar6 = 0;
          iVar5 = 0x50;
        }
      }
      else {
        if (bVar2 != 0x77) {
          return (long *)0x0;
        }
        *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + 6;
        lVar6 = d_parmlist(param_1);
        if (lVar6 == 0) {
          return (long *)0x0;
        }
        if (**(char **)(param_1 + 0x18) != 'E') {
          return (long *)0x0;
        }
        *(char **)(param_1 + 0x18) = *(char **)(param_1 + 0x18) + 1;
        iVar5 = 0x51;
      }
    }
    lVar6 = d_make_comp(param_1,iVar5,0,lVar6);
    *plVar1 = lVar6;
    if (lVar6 == 0) {
      return (long *)0x0;
    }
    pbVar7 = *(byte **)(param_1 + 0x18);
    plVar1 = (long *)(lVar6 + 0x10);
    uVar9 = (ulong)*pbVar7;
    iVar5 = next_is_type_qual_isra_0(pbVar7);
    cVar8 = (char)uVar9;
  } while( true );
}

