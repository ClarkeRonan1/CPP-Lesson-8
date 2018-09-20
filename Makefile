.PHONY: clean All

All:
	@echo "----------Building project:[ SolutionModulo - Debug ]----------"
	@cd "SolutionModulo" && "$(MAKE)" -f  "SolutionModulo.mk"
clean:
	@echo "----------Cleaning project:[ SolutionModulo - Debug ]----------"
	@cd "SolutionModulo" && "$(MAKE)" -f  "SolutionModulo.mk" clean
