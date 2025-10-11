
void __assert_fail(char *__assertion,char *__file,uint __line,char *__function)

{
  undefined8 uVar1;
  
  uVar1 = dcgettext(&_libc_intl_domainname,"%s%s%s:%u: %s%sAssertion `%s\' failed.\n%n",5);
                    /* WARNING: Subroutine does not return */
  __assert_fail_base(uVar1,__assertion,__file,__line,__function);
}

