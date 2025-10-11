
/* std::locale::name[abi:cxx11]() const */

void std::locale::name_abi_cxx11_(void)

{
  string *psVar1;
  undefined8 *puVar2;
  char *pcVar3;
  char *__s2;
  undefined *puVar4;
  int iVar5;
  size_t sVar6;
  string *psVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  long *in_RSI;
  string *in_RDI;
  char *__s1;
  
  psVar1 = in_RDI + 0x10;
  in_RDI[0x10] = (string)0x0;
  lVar9 = *in_RSI;
  *(string **)in_RDI = psVar1;
  puVar2 = *(undefined8 **)(lVar9 + 0x20);
  *(undefined8 *)(in_RDI + 8) = 0;
  pcVar3 = (char *)*puVar2;
  if (pcVar3 == (char *)0x0) {
    __cxx11::string::_M_replace_aux(in_RDI,0,0,1,'*');
  }
  else {
    if (puVar2[1] != 0) {
      uVar10 = 0;
      __s1 = pcVar3;
      do {
        uVar10 = uVar10 + 1;
        __s2 = (char *)puVar2[uVar10];
        iVar5 = strcmp(__s1,__s2);
        if (iVar5 != 0) {
          __cxx11::string::reserve(in_RDI,0x80);
          puVar4 = _S_categories;
          pcVar3 = *(char **)_S_categories;
          sVar6 = strlen(pcVar3);
          if (0x3fffffffffffffffU - *(long *)(in_RDI + 8) < sVar6) {
                    /* WARNING: Subroutine does not return */
            __throw_length_error("basic_string::append");
          }
          __cxx11::string::_M_append(in_RDI,pcVar3,sVar6);
          uVar10 = *(ulong *)(in_RDI + 8);
          psVar7 = *(string **)in_RDI;
          if (psVar1 == psVar7) {
            uVar8 = 0xf;
          }
          else {
            uVar8 = *(ulong *)(in_RDI + 0x10);
          }
          if (uVar8 < uVar10 + 1) {
            __cxx11::string::_M_mutate(in_RDI,uVar10,0,(char *)0x0,1);
            psVar7 = *(string **)in_RDI;
          }
          psVar7[uVar10] = (string)0x3d;
          *(ulong *)(in_RDI + 8) = uVar10 + 1;
          *(undefined1 *)(*(long *)in_RDI + 1 + uVar10) = 0;
          pcVar3 = (char *)**(undefined8 **)(*in_RSI + 0x20);
          sVar6 = strlen(pcVar3);
          if (sVar6 <= 0x3fffffffffffffffU - *(long *)(in_RDI + 8)) {
            __cxx11::string::_M_append(in_RDI,pcVar3,sVar6);
            lVar9 = 8;
            while( true ) {
              uVar10 = *(ulong *)(in_RDI + 8);
              psVar7 = *(string **)in_RDI;
              if (psVar1 == psVar7) {
                uVar8 = 0xf;
              }
              else {
                uVar8 = *(ulong *)(in_RDI + 0x10);
              }
              if (uVar8 < uVar10 + 1) {
                __cxx11::string::_M_mutate(in_RDI,uVar10,0,(char *)0x0,1);
                psVar7 = *(string **)in_RDI;
              }
              psVar7[uVar10] = (string)0x3b;
              *(ulong *)(in_RDI + 8) = uVar10 + 1;
              *(undefined1 *)(*(long *)in_RDI + 1 + uVar10) = 0;
              pcVar3 = *(char **)(puVar4 + lVar9);
              sVar6 = strlen(pcVar3);
              if (0x3fffffffffffffffU - *(long *)(in_RDI + 8) < sVar6) {
                    /* WARNING: Subroutine does not return */
                __throw_length_error("basic_string::append");
              }
              __cxx11::string::_M_append(in_RDI,pcVar3,sVar6);
              uVar10 = *(ulong *)(in_RDI + 8);
              psVar7 = *(string **)in_RDI;
              if (psVar1 == psVar7) {
                uVar8 = 0xf;
              }
              else {
                uVar8 = *(ulong *)(in_RDI + 0x10);
              }
              if (uVar8 < uVar10 + 1) {
                __cxx11::string::_M_mutate(in_RDI,uVar10,0,(char *)0x0,1);
                psVar7 = *(string **)in_RDI;
              }
              psVar7[uVar10] = (string)0x3d;
              *(ulong *)(in_RDI + 8) = uVar10 + 1;
              *(undefined1 *)(*(long *)in_RDI + 1 + uVar10) = 0;
              pcVar3 = *(char **)(*(long *)(*in_RSI + 0x20) + lVar9);
              sVar6 = strlen(pcVar3);
              if (0x3fffffffffffffffU - *(long *)(in_RDI + 8) < sVar6) break;
              __cxx11::string::_M_append(in_RDI,pcVar3,sVar6);
              lVar9 = lVar9 + 8;
              if (lVar9 == 0x60) {
                return;
              }
            }
                    /* WARNING: Subroutine does not return */
            __throw_length_error("basic_string::append");
          }
                    /* WARNING: Subroutine does not return */
          __throw_length_error("basic_string::append");
        }
        __s1 = __s2;
      } while (uVar10 < 0xb);
    }
    sVar6 = strlen(pcVar3);
                    /* try { // try from 00623da3 to 00624049 has its CatchHandler @ 0062404a */
    __cxx11::string::_M_replace(in_RDI,0,0,pcVar3,sVar6);
  }
  return;
}

