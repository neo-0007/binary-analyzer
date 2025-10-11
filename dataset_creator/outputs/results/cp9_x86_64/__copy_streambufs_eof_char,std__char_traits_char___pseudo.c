
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* long std::__copy_streambufs_eof<char, std::char_traits<char> >(std::streambuf*, std::streambuf*,
   bool&) */

long std::__copy_streambufs_eof<char,std::char_traits<char>>
               (streambuf *param_1,streambuf *param_2,bool *param_3)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  byte *pbVar5;
  byte *pbVar6;
  long lVar7;
  
  pbVar6 = *(byte **)(param_1 + 0x10);
  pbVar5 = *(byte **)(param_1 + 0x18);
  *param_3 = true;
  if (pbVar6 < pbVar5) {
    uVar1 = (uint)*pbVar6;
  }
  else {
    uVar1 = (**(code **)(*(long *)param_1 + 0x48))();
    if (uVar1 == 0xffffffff) {
      return 0;
    }
    pbVar5 = *(byte **)(param_1 + 0x18);
    pbVar6 = *(byte **)(param_1 + 0x10);
  }
  lVar7 = 0;
LAB_006b272f:
  lVar4 = (long)pbVar5 - (long)pbVar6;
  if (lVar4 < 2) goto LAB_006b2770;
  do {
    lVar3 = (**(code **)(*(long *)param_2 + 0x60))(param_2,pbVar6,lVar4);
    *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + lVar3;
    lVar7 = lVar7 + lVar3;
    if (lVar3 < lVar4) {
LAB_006b27b9:
      *param_3 = false;
      return lVar7;
    }
    while( true ) {
      uVar1 = (**(code **)(*(long *)param_1 + 0x48))(param_1);
      if (uVar1 == 0xffffffff) {
        return lVar7;
      }
      pbVar6 = *(byte **)(param_1 + 0x10);
      lVar4 = *(long *)(param_1 + 0x18) - (long)pbVar6;
      if (1 < lVar4) break;
LAB_006b2770:
      if (*(undefined1 **)(param_2 + 0x28) < *(undefined1 **)(param_2 + 0x30)) {
        **(undefined1 **)(param_2 + 0x28) = (char)uVar1;
        *(long *)(param_2 + 0x28) = *(long *)(param_2 + 0x28) + 1;
      }
      else {
        iVar2 = (**(code **)(*(long *)param_2 + 0x68))(param_2,uVar1 & 0xff);
        if (iVar2 == -1) goto LAB_006b27b9;
      }
      pbVar5 = *(byte **)(param_1 + 0x18);
      lVar7 = lVar7 + 1;
      if (*(byte **)(param_1 + 0x10) < pbVar5) {
        pbVar6 = *(byte **)(param_1 + 0x10) + 1;
        *(byte **)(param_1 + 0x10) = pbVar6;
      }
      else {
        iVar2 = (**(code **)(*(long *)param_1 + 0x50))(param_1);
        if (iVar2 == -1) {
          return lVar7;
        }
        pbVar6 = *(byte **)(param_1 + 0x10);
        pbVar5 = *(byte **)(param_1 + 0x18);
      }
      if (pbVar6 < pbVar5) {
        uVar1 = (uint)*pbVar6;
        goto LAB_006b272f;
      }
    }
  } while( true );
}

