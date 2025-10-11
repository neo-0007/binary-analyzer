
void RAND_add(void *buf,int num,double entropy)

{
  RAND_METHOD *pRVar1;
  long lVar2;
  
  pRVar1 = RAND_get_rand_method();
  if ((pRVar1 != (RAND_METHOD *)0x0) && (pRVar1->add != (_func_3915 *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x0042f973. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pRVar1->add)(buf,num,entropy);
    return;
  }
  lVar2 = RAND_get0_primary(0);
  if ((lVar2 != 0) && (0 < num)) {
    EVP_RAND_reseed(lVar2,0,0,0,buf,(long)num);
    return;
  }
  return;
}

