
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* long std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::wstreambuf*,
   std::wstreambuf*, bool&) */

long std::__copy_streambufs_eof<wchar_t,std::char_traits<wchar_t>>
               (wstreambuf *param_1,wstreambuf *param_2,bool *param_3)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  int *piVar6;
  long lVar7;
  
  piVar1 = *(int **)(param_1 + 0x10);
  *param_3 = true;
  if (piVar1 < *(int **)(param_1 + 0x18)) {
    iVar3 = *piVar1;
  }
  else {
    iVar3 = (**(code **)(*(long *)param_1 + 0x48))();
  }
  lVar7 = 0;
  do {
    while( true ) {
      if (iVar3 == -1) {
        return lVar7;
      }
      piVar1 = *(int **)(param_1 + 0x18);
      piVar6 = *(int **)(param_1 + 0x10);
      lVar5 = (long)piVar1 - (long)piVar6;
      if (lVar5 < 5) break;
      lVar4 = (**(code **)(*(long *)param_2 + 0x60))(param_2);
      lVar7 = lVar7 + lVar4;
      *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + lVar4 * 4;
      if (lVar4 < lVar5 >> 2) {
LAB_006b28d0:
        *param_3 = false;
        return lVar7;
      }
LAB_006b286c:
      iVar3 = (**(code **)(*(long *)param_1 + 0x48))(param_1);
    }
    piVar2 = *(int **)(param_2 + 0x28);
    if (piVar2 < *(int **)(param_2 + 0x30)) {
      *piVar2 = iVar3;
      *(int **)(param_2 + 0x28) = piVar2 + 1;
      if (piVar6 < piVar1) goto LAB_006b28ab;
LAB_006b2910:
      iVar3 = (**(code **)(*(long *)param_1 + 0x50))(param_1);
    }
    else {
      iVar3 = (**(code **)(*(long *)param_2 + 0x68))(param_2,iVar3);
      if (iVar3 == -1) goto LAB_006b28d0;
      piVar6 = *(int **)(param_1 + 0x10);
      if (*(int **)(param_1 + 0x18) <= piVar6) goto LAB_006b2910;
LAB_006b28ab:
      iVar3 = *piVar6;
      *(int **)(param_1 + 0x10) = piVar6 + 1;
    }
    lVar7 = lVar7 + 1;
    if (iVar3 == -1) {
      return lVar7;
    }
    if (*(int **)(param_1 + 0x18) <= *(int **)(param_1 + 0x10)) goto LAB_006b286c;
    iVar3 = **(int **)(param_1 + 0x10);
  } while( true );
}

