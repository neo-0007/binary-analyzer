
/* _txnal_cow_string_C1_for_exceptions(void*, char const*, void*) */

void _txnal_cow_string_C1_for_exceptions(void *param_1,char *param_2,void *param_3)

{
  char cVar1;
  long *plVar2;
  long lVar3;
  
  lVar3 = 1;
  while( true ) {
    cVar1 = func_0x00000000(param_2 + lVar3 + -1);
    if (cVar1 == '\0') break;
    lVar3 = lVar3 + 1;
  }
                    /* try { // try from 006b45b6 to 006b45ba has its CatchHandler @ 006b45ef */
  plVar2 = (long *)func_0x00000000(lVar3 + 0x18);
  *(undefined4 *)(plVar2 + 2) = 0;
  plVar2[1] = lVar3 + -1;
  *plVar2 = lVar3 + -1;
  func_0x00000000(plVar2 + 3,param_2,lVar3);
  *(long **)param_1 = plVar2 + 3;
  return;
}

