--
--	New Ada Body File starts here.
--	This file should be named test_msg.adb
--	Automatically generated by NML CodeGen Java Applet.
--	on Thu Aug 19 15:55:16 EDT 2004
--

with Nml; use Nml;


--	Some standard Ada Packages we always need.
with Unchecked_Deallocation;
with Unchecked_Conversion;
with Interfaces.C; use Interfaces.C;
with Interfaces.C.Strings; use Interfaces.C.Strings;

package body test_msg is


	-- Every NMLmsg type needs an update and an initialize function.

	procedure Initialize(Msg : in out TEST_B_MSG) is
	begin
		Msg.NmlType := TEST_B_MSG_TYPE;
		Msg.Size := TEST_B_MSG'Size;
	end Initialize;

	procedure Update_TEST_B_MSG(Cms : in Cms_Access; Msg : in TEST_B_MSG_Access) is
	begin
		Msg.NmlType := TEST_B_MSG_TYPE;
		Msg.Size := TEST_B_MSG'Size;
		CmsUpdateInt(Cms, "i", Msg.i);
	end Update_TEST_B_MSG;


	procedure Initialize(Msg : in out TEST_MSG) is
	begin
		Msg.NmlType := TEST_MSG_TYPE;
		Msg.Size := TEST_MSG'Size;
	end Initialize;

	procedure Update_TEST_MSG(Cms : in Cms_Access; Msg : in TEST_MSG_Access) is
	begin
		Msg.NmlType := TEST_MSG_TYPE;
		Msg.Size := TEST_MSG'Size;
		CmsUpdateInt(Cms, "i", Msg.i);
		CmsUpdateIntArray(Cms, "ia", Msg.ia,10);
		CmsUpdateInt(Cms, "ida_length", Msg.ida_length);
		CmsUpdateIntDla(Cms, "ida", Msg.ida,Msg.ida_length,8);
	end Update_TEST_MSG;



	NameList : constant Char_Array(1..33) := (
		'T','E','S','T','_','B','_','M','S','G',nul,
		'T','E','S','T','_','M','S','G',nul,nul,nul,
		nul,nul,nul,nul,nul,nul,nul,nul,nul,nul,nul
		);

	IdList : constant Nml.Long_Array(1..3) := (
		TEST_B_MSG_TYPE, -- 1002, 0
		TEST_MSG_TYPE, -- 1001, 1
		-1);

	SizeList : constant Nml.Size_T_Array(1..3) := (
		TEST_B_MSG'Size,
		TEST_MSG'Size,
		0);

	function Symbol_Lookup(Nml_Type : in long) return Interfaces.C.Strings.chars_ptr;
	pragma Export(C,Symbol_Lookup,"ada_test_msg_symbol_lookup");

	function Symbol_Lookup(Nml_Type : in long) return Interfaces.C.Strings.chars_ptr is
	begin
		case Nml_Type is
			 when TEST_B_MSG_TYPE	=>	return Nml.ReturnSymbol(NameList(1..12));
			 when TEST_MSG_TYPE	=>	return Nml.ReturnSymbol(NameList(12..21));
			 when others	=>	return Null_Ptr;
		end case;
	end Symbol_Lookup;

	function Format(Nml_Type : in long;
			Msg : in Nml.NmlMsg_Access;
			Cms : in Nml.Cms_Access)
				return int is
		Checked_Nml_Type : long;
	begin

		Checked_Nml_Type := CmsCheckTypeInfo(Cms,Nml_Type,Msg,"test_msg",
			Symbol_Lookup'Access,
			NameList,IdList,SizeList,3,11);

		if Msg = Null then
			return 0;
		end if;

		case Checked_Nml_Type is
			when TEST_B_MSG_TYPE	=>	Update_TEST_B_MSG(Cms, NmlMsg_to_TEST_B_MSG(Msg));
			when TEST_MSG_TYPE	=>	Update_TEST_MSG(Cms, NmlMsg_to_TEST_MSG(Msg));
			when others	=>	return 0;
		end case;
		return 1;
	end Format;

end test_msg;

-- End of Ada Body file  test_msg.adb
