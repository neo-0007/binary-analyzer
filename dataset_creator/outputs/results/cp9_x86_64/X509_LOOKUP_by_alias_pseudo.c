
int X509_LOOKUP_by_alias(X509_LOOKUP *ctx,int type,char *str,int len,X509_OBJECT *ret)

{
  _func_1842 *UNRECOVERED_JUMPTABLE;
  int iVar1;
  
  if ((ctx->method != (X509_LOOKUP_METHOD *)0x0) &&
     (UNRECOVERED_JUMPTABLE = ctx->method->get_by_alias, UNRECOVERED_JUMPTABLE != (_func_1842 *)0x0)
     ) {
                    /* WARNING: Could not recover jumptable at 0x0058c966. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = (*UNRECOVERED_JUMPTABLE)(ctx,type,str,len,ret);
    return iVar1;
  }
  return 0;
}

